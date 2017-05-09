/*****************************************************************************
  *Ten Tep          :     user_gpio.c
  *Ngay             :     27/01/2016
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Dinh nghia cac ham cau hinh GPIO trong STM8
  ******************************************************************************/

#include "user_gpio.h"
#if (__USER_GPIO_H!=27012016)  
    #error "Include Sai #File user_gpio.h"
#endif

/*******************************************************************************
Noi Dung    :   Cau hinh GPIO.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
*******************************************************************************/

void GPIO_Configuration(void)
{
/********************************* PORTA *************************************/
    DDRA=0xFF;
    CRA1=0xFF;
    CRA2=0xFF;
    PORTA=0xFF;
/********************************* PORTB *************************************/
    DDRB=0xFF;
    CRB1=0xFF;
    CRB2=0xFF;  
    PORTB=0xFF;
/********************************* PORTC *************************************/
    DDRC=0xDF;
    CRC1=0xDF;
    CRC2=0xDF;
    PORTC=0xFF;
/********************************* PORTD *************************************/
    DDRD=0xB7;
    CRD1=0xFF;
    CRD2=0xB7;
    PORTD=0xFF;
/********************************* PORTE *************************************/
    DDRE=0xFF;
    CRE1=0xFF;
    CRE2=0xFF;
    PORTE=0xFF;
/********************************* PORTF *************************************/
}

/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/