/*****************************************************************************
  *Ten Tep          :     user_delay.c
  *Ngay             :     28/06/2014
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Dinh nghia cac ham tao delay trong STM8
  ******************************************************************************/

#include "user_delay.h"
#if(__USER_DELAY_H != 28062014)
    #error "Include Sai File user_delay.h"
#endif

/*******************************************************************************
Noi Dung    :   Ham tao tre us.
Tham Bien   :   x: Thoi gian tre.
Tra Ve      :   Khong.
*******************************************************************************/

void delay_us(uint16_t x)
{
    while(x--)
    {
        nop();
        nop();
        nop();
        nop();
        nop();
        nop();
        nop();
        nop();
        nop();
        nop();
        nop();
    }
}

/*******************************************************************************
Noi Dung    :   Ham tao tre ms.
Tham Bien   :   x: Thoi gian tre.
Tra Ve      :   Khong.
*******************************************************************************/

void delay_ms(uint16_t x)
{
    while(x--)
    {
        delay_us(1000);
    }
}

/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/