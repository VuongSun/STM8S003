/**
  ******************************************************************************
  * Ten Tep      :        nrf24l01.c
  * Tac Gia      :        Le Anh Quang
  * Cong Ty      :        MinhHaGroup
  * Website      :        BanLinhKien.Vn
  * Phien Ban    :        V1.0.0
  * Ngay         :        11-03-2014
  * Tom Tat      :        Dinh nghia cac ham giao tiep NRF24L01
  *           
  *
  ******************************************************************************
  * Chu Y        :   
  * Vi Du        :                    
  ******************************************************************************
**/
#include "nrf24l01.h"

static uint8_t  TX_ADDRESS[TX_ADR_WIDTH]= {0x34,0x43,0x10,0x10,0x01};   
static uint8_t  RX_ADDRESS[RX_ADR_WIDTH]= {0x34,0x43,0x10,0x10,0x01};  

/*-----------------------------------------------------------------------------
Noi Dung    :   Ghi/Doc du lieu theo chuan SPI.
Tham Bien   :   data: du lieu can ghi.  
Tra Ve      :   du lieu doc ve.
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_ReadWrite(uint8_t data)
{
	uint8_t i;
    for(i=0;i<8;i++) 		// output 8-bit
    {
		if((data & 0x80)==0x80) NRF24L01_MOSI = 1 ;   	// output 'uchar', MSB to MOSI    
        else NRF24L01_MOSI = 0;
        delay_us(5);
		
        data = (data << 1);           			// shift next bit into MSB..
        NRF24L01_SCK = 1;                      			// Set SCK high..          
        delay_us(5);
        data |= NRF24L01_MISO;               			// capture current MISO bit
        NRF24L01_SCK = 0;                    			// ..then set SCK low again
    }  
    return(data);                   			// return read uchar
}

/*-----------------------------------------------------------------------------
Noi Dung    :   Doc du lieu tu 1 thanh ghi trong NRF24L01. 
Tham Bien   :   reg_addr: Dia chi thanh ghi can doc.  
Tra Ve      :   Gia tri cua thanh ghi.
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_ReadReg(uint8_t reg_addr)
{
	uint8_t reg_val;
	
	NRF24L01_CSN = 0;               // CSN low, initialize SPI communication...
	SPI_ReadWrite(reg_addr);            	// Chon thanh ghi can doc du lieu
	reg_val = SPI_ReadWrite(0);    	// Doc du lieu tu thanh ghi
	NRF24L01_CSN = 1;               // CSN high, terminate SPI communication
	
	return(reg_val);        		// tra ve du lieu cua thanh ghi can doc
}

/*-----------------------------------------------------------------------------
Noi Dung    :   Ghi/Doc du lieu cua 1 thanh ghi trong NRF24L01. 
Tham Bien   :   reg_addr: Dia chi thanh ghi can Doc/Ghi.
				value: Gia tri can ghi vao thanh ghi.
Tra Ve      :   Gia tri cua thanh ghi.
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_RW_Reg(uint8_t reg_addr,uint8_t value)
{
	uint8_t status1;

	NRF24L01_CSN = 0;                   	// CSN low, init SPI transaction
	status1 = SPI_ReadWrite(reg_addr);      // select register
	SPI_ReadWrite(value);             		// ..and write value to it..
	NRF24L01_CSN = 1;                   	// CSN high again

	return(status1);            			// return nRF24L01 status uchar
}

/*-----------------------------------------------------------------------------
Noi Dung    :   . 
Tham Bien   :   .
Tra Ve      :   .
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_Read_Buf(uint8_t reg_addr, uint8_t *buff_data, uint8_t uchars)
{
	uint8_t status1,i;

	NRF24L01_CSN = 0;                          // Set CSN low, init SPI tranaction
	status1 = SPI_ReadWrite(reg_addr);         // Select register to write to and read status uchar
	for(i=0;i<uchars;i++)
	{
		buff_data[i] = SPI_ReadWrite(0);    //
	}
	NRF24L01_CSN = 1;
	return(status1);                    // return nRF24L01 status uchar
}

/*-----------------------------------------------------------------------------
Noi Dung    :   . 
Tham Bien   :   .
Tra Ve      :   .
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_Write_Buf(uint8_t reg_addr, uint8_t *buff_data, uint8_t uchars)
{
	uint8_t status1,i;
	
	NRF24L01_CSN = 0;            //SPI
	status1 = SPI_ReadWrite(reg_addr);
	for(i=0; i<uchars; i++) 
	{
		SPI_ReadWrite(*buff_data++);
	}
	NRF24L01_CSN = 1;           //SPI
	return(status1);    
}

/*-----------------------------------------------------------------------------
Noi Dung    :   Khoi tao NRF24L01.
Tham Bien   :   Khong. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
void Init_NRF24L01(void)
{
	delay_us(100);
    NRF24L01_CE=0;    // chip enable
    NRF24L01_CSN=1;   // Spi disable
    NRF24L01_SCK=0;   // Spi clock line init high
	
	SPI_Write_Buf(WRITE_REG + TX_ADDR, TX_ADDRESS, TX_ADR_WIDTH);    	//
	SPI_Write_Buf(WRITE_REG + RX_ADDR_P0, RX_ADDRESS, RX_ADR_WIDTH); 	//
	SPI_RW_Reg(WRITE_REG + EN_AA, 0x01);      							// EN P0, 2-->P1
	SPI_RW_Reg(WRITE_REG + EN_RXADDR, 0x01);  							//Enable data P0
	SPI_RW_Reg(WRITE_REG + RF_CH, 0);        							// Chanel 0 RF = 2400 + RF_CH* (1or 2 M)
	SPI_RW_Reg(WRITE_REG + RX_PW_P0, RX_PLOAD_WIDTH);					// Do rong data truyen 32 byte
	SPI_RW_Reg(WRITE_REG + RF_SETUP, 0x07);         					// 1M, 0dbm
	SPI_RW_Reg(WRITE_REG + CONFIG, 0x0e);          						// Enable CRC, 2 byte CRC, Send
}

/*-----------------------------------------------------------------------------
Noi Dung    :   Thiet lap NRF24L01 o che do nhan du lieu.
Tham Bien   :   Khong. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
void SetRX_Mode(void)
{
	NRF24L01_CE=0;
	SPI_RW_Reg(WRITE_REG + CONFIG, 0x0f);         // Enable CRC, 2 byte CRC, Recive
	NRF24L01_CE = 1;
	delay_us(130);   
}

/*-----------------------------------------------------------------------------
Noi Dung    :   Thiet lap NRF24L01 o che do truyen du lieu.
Tham Bien   :   Khong. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
void SetTX_Mode(void)
{
	NRF24L01_CE=0;
	SPI_RW_Reg(WRITE_REG + CONFIG, 0x0e);         // Enable CRC, 2 byte CRC, Send
	NRF24L01_CE = 1;
	delay_us(130);    
}

/*-----------------------------------------------------------------------------
Noi Dung    :   Nhan du lieu tu NRF24L01.
Tham Bien   :   *rx_buff: bo dem luu du lieu nhan ve. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
uint8_t NRF24L01_RxPacket(uint8_t *rx_buff)
{
	uint8_t revale = 0;
	uint8_t buff_status;
  
	//if(RX_DR)            			// Data in RX FIFO
	buff_status = SPI_ReadReg(STATUS);   	// Read Status  
	if((buff_status & 0x40)!=0)      			// Data in RX FIFO
	{
		NRF24L01_CE = 0;          
		SPI_Read_Buf(RD_RX_PLOAD,rx_buff,TX_PLOAD_WIDTH);	// read receive payload from RX_FIFO buffer
		revale =1;   
	}
	SPI_RW_Reg(WRITE_REG+STATUS,buff_status);   
	return revale;
}

/*-----------------------------------------------------------------------------
Noi Dung    :   Truyen du lieu tu NRF24L01.
Tham Bien   :   *tx_buff: bo dem luu du lieu can truyen di. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
void NRF24L01_TxPacket(uint8_t *tx_buff)
{
	NRF24L01_CE=0;      
	SPI_Write_Buf(WRITE_REG + RX_ADDR_P0, TX_ADDRESS, TX_ADR_WIDTH); 	// Send Address
	SPI_Write_Buf(WR_TX_PLOAD, tx_buff, TX_PLOAD_WIDTH);           		//send data
	SPI_RW_Reg(WRITE_REG + CONFIG, 0x0e);          						// Send Out    
    NRF24L01_FlushRX();
	NRF24L01_CE=1;   
}

void NRF24L01_FlushTX(void)
{
    NRF24L01_CSN = 0;
    SPI_ReadWrite(FLUSH_TX);
    NRF24L01_CSN = 1;  
}

void NRF24L01_FlushRX(void)
{
    NRF24L01_CSN = 0;
    SPI_ReadWrite(FLUSH_RX);
    NRF24L01_CSN = 1;  
}
/*-----------------------------KET THUC FILE-----------------------------
 ______________________________LE ANH QUANG______________________________*/
