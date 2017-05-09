/*****************************************************************************
  *Ten Tep          :     i2c.h
  *Ngay             :     19/03/2014
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Khai bao cac ham giao tiep I2C
  ******************************************************************************
  * Chu Y           :     Phai dinh nghia cac chan giao tiep chuan I2C vao main.h
      
        #define I2CSOFT_SDADDR  DDRC_4
        #define I2CSOFT_SDAOUT  PORTC_4
        #define I2CSOFT_SDAIN   PINC_4
        #define I2CSOFT_SCLDDR  DDRD_0
        #define I2CSOFT_SCL     PORTD_0                     
  ******************************************************************************
**/

#ifndef __I2C_H
#define __I2C_H    19032014

#include "main.h"

#define DDR_OUT     1
#define DDR_IN      0
#define I2C_DELAY   2
/*******************************************************************************
Noi Dung    :   Khoi tao giao thuc I2C
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/

void I2CSOFT_Init(void);

/*******************************************************************************
Noi Dung    :   Gui lenh Start I2C.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/

void I2CSOFT_Start(void);

/*******************************************************************************
Noi Dung    :   Gui lenh Stop I2C.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/

void I2CSOFT_Stop(void);

/*******************************************************************************
Noi Dung    :   Viet du lieu len Bus I2C.
Tham Bien   :   Data: Gia tri du lieu.
Tra Ve      :   Bit Ack.
********************************************************************************/ 

uint8_t I2CSOFT_WriteData(uint8_t Data);

/*******************************************************************************
Noi Dung    :   Lay du lieu tren Bus I2C.
Tham Bien   :   Ack: gia tri Bit Ack phan hoi khi doc het du lieu, 
Tra Ve      :   Gia tri du lieu.
********************************************************************************/

uint8_t I2CSOFT_ReadData(uint8_t Ack);

#endif
/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Team______________________________*/