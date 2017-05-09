/**
  ******************************************************************************
  * Ten Tep      :        nrf24l01.h
  * Tac Gia      :        Le Anh Quang
  * Cong Ty      :        MinhHaGroup
  * Website      :        BanLinhKien.Vn
  * Phien Ban    :        V1.0.0
  * Ngay         :        11-03-2014
  * Tom Tat      :        Khai bao cac ham giao tiep NRF24L01
  *           
  *
  ******************************************************************************
  * Chu Y        :   
  * Vi Du        :                    
  ******************************************************************************
**/
//#include <intrins.h>

#ifndef __NRF24L01_H
#define __NRF24L01_H

#include "main.h"

//extern uint8_t TxBuf[32];

//-------------------------------------------NRF24L01---------------------------------------------------
#define TX_ADR_WIDTH    5      	// 5 uints TX address width
#define RX_ADR_WIDTH    5      	// 5 uints RX address width
#define TX_PLOAD_WIDTH  32     	// 32 uints TX payload
#define RX_PLOAD_WIDTH  32     	// 32 uints TX payload

#define READ_REG        0x00    //
#define WRITE_REG       0x20    //
#define RD_RX_PLOAD     0x61    //
#define WR_TX_PLOAD     0xA0    //
#define FLUSH_TX        0xE1    //
#define FLUSH_RX        0xE2    //
#define REUSE_TX_PL     0xE3    //
#define NOP             0xFF    //

//-------------------------------------------SPI(NRF24L01)---------------------------------------------------
#define CONFIG          0x00  	//
#define EN_AA           0x01  	//
#define EN_RXADDR       0x02  	//
#define SETUP_AW        0x03  	//
#define SETUP_RETR      0x04  	//
#define RF_CH           0x05  	//
#define RF_SETUP        0x06  	//
#define STATUS          0x07  	//
#define OBSERVE_TX      0x08  	// ·
#define CD              0x09  	//
#define RX_ADDR_P0      0x0A  	//
#define RX_ADDR_P1      0x0B  	//
#define RX_ADDR_P2      0x0C  	//
#define RX_ADDR_P3      0x0D  	//
#define RX_ADDR_P4      0x0E  	//
#define RX_ADDR_P5      0x0F  	//
#define TX_ADDR         0x10  	//
#define RX_PW_P0        0x11  	//
#define RX_PW_P1        0x12  	//
#define RX_PW_P2        0x13  	//
#define RX_PW_P3        0x14  	//
#define RX_PW_P4        0x15  	//
#define RX_PW_P5        0x16  	//
#define FIFO_STATUS     0x17  	//


/*-----------------------------------------------------------------------------
Noi Dung    :   Ghi/Doc du lieu theo chuan SPI.
Tham Bien   :   data: du lieu can ghi.  
Tra Ve      :   du lieu doc ve.
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_ReadWrite(uint8_t data);

/*-----------------------------------------------------------------------------
Noi Dung    :   Doc du lieu tu 1 thanh ghi trong NRF24L01. 
Tham Bien   :   reg_addr: Dia chi thanh ghi can doc.  
Tra Ve      :   Gia tri cua thanh ghi can doc.
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_ReadReg(uint8_t reg_addr);

/*-----------------------------------------------------------------------------
Noi Dung    :   Ghi/Doc du lieu cua 1 thanh ghi trong NRF24L01. 
Tham Bien   :   reg_addr: Dia chi thanh ghi can Doc/Ghi.
				value: Gia tri can ghi vao thanh ghi.
Tra Ve      :   Gia tri cua thanh ghi.
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_RW_Reg(uint8_t reg_addr,uint8_t value);

/*-----------------------------------------------------------------------------
Noi Dung    :   . 
Tham Bien   :   .
Tra Ve      :   .
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_Read_Buf(uint8_t reg_addr, uint8_t *buff_data, uint8_t uchars);

/*-----------------------------------------------------------------------------
Noi Dung    :   . 
Tham Bien   :   .
Tra Ve      :   .
  -----------------------------------------------------------------------------*/
  
uint8_t SPI_Write_Buf(uint8_t reg_addr, uint8_t *buff_data, uint8_t uchars);

/*-----------------------------------------------------------------------------
Noi Dung    :   Khoi tao NRF24L01.
Tham Bien   :   Khong. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
void Init_NRF24L01(void);

/*-----------------------------------------------------------------------------
Noi Dung    :   Thiet lap NRF24L01 o che do nhan du lieu.
Tham Bien   :   Khong. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
void SetRX_Mode(void);

/*-----------------------------------------------------------------------------
Noi Dung    :   Thiet lap NRF24L01 o che do truyen du lieu.
Tham Bien   :   Khong. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
void SetTX_Mode(void);

/*-----------------------------------------------------------------------------
Noi Dung    :   Nhan du lieu tu NRF24L01.
Tham Bien   :   *rx_buff: bo dem luu du lieu nhan ve. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
uint8_t NRF24L01_RxPacket(uint8_t *rx_buff);

/*-----------------------------------------------------------------------------
Noi Dung    :   Giai ma so lieu dua vao Buffer 
Tham Bien   :   number    : Gia tri so can hien thi.
                *buff_data: Con tro luu tru gia tri chuyen doi. 
Tra Ve      :   Khong.
  -----------------------------------------------------------------------------*/
  
void NRF24L01_TxPacket(uint8_t *tx_buff);

void NRF24L01_FlushTX(void); 

void NRF24L01_FlushRX(void); 
#endif
/*-----------------------------KET THUC FILE-----------------------------
 ______________________________LE ANH QUANG______________________________*/
