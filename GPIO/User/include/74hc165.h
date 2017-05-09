/*****************************************************************************
  *Ten Tep          :     74hc165.h
  *Ngay             :     24/08/2015
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Khai bao cac ham giao tiep 74hc165
  ******************************************************************************
  *Chu Y            :     Can khai bao cac chan CD4094 vao ham "main.h"
      #define 74HC165_CLK      PORTD_0
      #define 74HC165_SH_LD    PORTD_1
  ******************************************************************************/

#ifndef __74HC165_H
#define __74HC165_H    24082015

#include "Main\main.h"

/*******************************************************************************
Noi Dung    : Tao xung Clock de giao tiep voi 74HC165.
Tham Bien   : Khong.
Tra Ve      : Khong.
*******************************************************************************/

void HC165_Clock(void);

/*******************************************************************************
Noi Dung    : Doc du lieu tu 74HC165.
Tham Bien   : *Data, *Data1: 2 con tro quan ly du lieu doc ra tu 2 74HC165.
Tra Ve      : Khong.
*******************************************************************************/

void HC165_GetByte(uint8_t *Data1, uint8_t *Data2);

#endif 
/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/