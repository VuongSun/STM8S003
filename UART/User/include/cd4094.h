/*****************************************************************************
  *Ten Tep          :     cd4094.h
  *Ngay             :     17/05/2014
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Khai bao cac ham giao tiep CD4094
  ******************************************************************************
  *Chu Y            :     Can khai bao cac chan CD4094 vao ham "main.h"
      #define     CD4094_DATA   PORTD_4
      #define     CD4094_CLK    PORTD_6
      #define     CD4094_STROBE PORTC_7
  ******************************************************************************/

#ifndef __CD4094_H
#define __CD4094_H    17052014

#include "main.h"

/*******************************************************************************
Noi Dung    :   Tao xung Clock cho CD4094.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/

void CD4094_Clock(void);

/*******************************************************************************
Noi Dung    :   Chot du lieu tu CD4094 ra ngoai (Chot theo muc 1).
Tham Bien   :   Khong.
Tra Ve      :   Khong.
********************************************************************************/

void CD4094_Latch(void);

/*******************************************************************************
Noi Dung    :   Ghi mot Byte du lieu vao CD4094.
Tham Bien   :   Data: Du lieu can ghi vao.
Tra Ve      :   Khong.
********************************************************************************/

void CD4094_InByte(uint8_t Data);

/*******************************************************************************
Noi Dung    :   Ghi nhieu Byte du lieu lien tiep vao CD4094.
Tham Bien   :   *Data  : Con tro quan ly du lieu can ghi vao.
                Lenght : So Byte du lieu can ghi vao. 
Tra Ve      :   Khong.
********************************************************************************/

void CD4094_InArray(uint8_t *Data,uint8_t Lenght);

#endif 
/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/