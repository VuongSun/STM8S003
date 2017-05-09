/*****************************************************************************
  *Ten Tep          :     cd4094.c
  *Ngay             :     17/05/2014
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Dinh nghia cac ham giao tiep CD4094
  ******************************************************************************
  *Chu Y            :     Can khai bao cac chan CD4094 vao ham "main.h"
      #define     CD4094_DATA   PORTD_4
      #define     CD4094_CLK    PORTD_6
      #define     CD4094_STROBE PORTC_7
  ******************************************************************************/

#include "cd4094.h"

#if (__CD4094_H!=17052014)
    #error "Includes Sai File cd4094.h"
#endif

/*******************************************************************************
Noi Dung    :   Tao xung Clock cho CD4094.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/

void CD4094_Clock(void)
{
    CD4094_CLK=1;
    delay_us(1);
    CD4094_CLK=0;
    delay_us(1);
}

/*******************************************************************************
Noi Dung    :   Chot du lieu tu CD4094 ra ngoai (Chot theo muc 1).
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/

void CD4094_Latch(void)
{
    CD4094_STROBE=1; 
    delay_us(1);
    CD4094_STROBE=0;
    delay_us(1);
}

/*******************************************************************************
Noi Dung    :   Ghi mot Byte du lieu vao CD4094.
Tham Bien   :   Data: Du lieu can ghi vao.
Tra Ve      :   Khong.
********************************************************************************/

void CD4094_InByte(uint8_t Data)
{
    uint8_t i=0x80;
    while(i)
    {
        CD4094_DATA=((Data&i)==i);
        CD4094_Clock();
        i>>=1;
    } 
}

/*******************************************************************************
Noi Dung    :   Ghi nhieu Byte du lieu lien tiep vao CD4094.
Tham Bien   :   *Data  : Con tro quan ly du lieu can ghi vao.
                Lenght : So Byte du lieu can ghi vao. 
Tra Ve      :   Khong.
********************************************************************************/

void CD4094_InArray(uint8_t *Data,uint8_t Lenght)
{
    while(Lenght)
    {
        CD4094_InByte(Data[--Lenght]);    
    }
}
/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/


