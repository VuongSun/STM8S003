/*****************************************************************************
  *Ten Tep          :     main.h
  *Ngay             :     6/5/2017
  *Tac Gia          :     VuongSun
  *Cong Ty          :     Fsoft
  *mail             :     minhvuong2302@gmail.com
  *Phien Ban        :     V1.0
  *Tom Tat          :     Khai bao cac thu vien.
  *                       Cau hinh mot so chuc nang cho trinh bien dich.
  *                       Cau hinh mot so chuc nang cho CHIP.
  *                       Dinh nghia I/O.
  *
  *
  *****************************************************************************/

#ifndef __MAIN_H
#define __MAIN_H    652017

#define FLASH_ADDR _Pragma("location=\"FLASH\"")
/*    Kieu So Nguyen Co Dau    */
typedef  long  int    int32_t;
typedef  int          int16_t;
typedef  char         int8_t;

/*	Kieu So Nguyen Khong Dau */
typedef unsigned long  uint32_t;
typedef unsigned int   uint16_t;
typedef unsigned char  uint8_t;
/*	Kieu So Thuc */
typedef   float            float32_t;


/******************************************************************************
  COMPILER LIB - COMPILER LIB - COMPILER LIB - COMPILER LIB - COMPILER LIB
******************************************************************************/
#include "stdio.h"
#include "string.h"
/******************************************************************************
  FW LIB - FW LIB - FW LIB - FW LIB - FW LIB - FW LIB - FW LIB - FW LIB - FW LIB 
******************************************************************************/
#include "defstm8s.h"
#include "stm8s_flash.h"
#include "stm8s_clk.h"
#include "stm8s_tim4.h"
#include "stm8s_tim2.h"
#include "stm8s_iwdg.h"
#include "stm8s_tim1.h"
#include "stm8s_exti.h"
/******************************************************************************
  USERSTM8 LIB - USERSTM8 LIB - USERSTM8 LIB - USERSTM8 LIB - USERSTM8 LIB 
******************************************************************************/
#include "user_delay.h"
#include "user_gpio.h"
#include "user_timer.h"
#include "user_eeprom.h"
#include "user_iwdg.h"
/******************************************************************************
  USER LIB - USER LIB - USER LIB - USER LIB - USER LIB - USER LIB - USER LIB
******************************************************************************/
/******************************************************************************
DEFINE GPIO - DEFINE GPIO - DEFINE GPIO - DEFINE GPIO - DEFINE GPIO - DEFINE GPIO
******************************************************************************/
//______________________I/O A ____________________________
//______________________I/O B ____________________________
//______________________I/O C ____________________________

//______________________I/O D ____________________________
//______________________I/O E ____________________________
//______________________I/O F ____________________________
//______________________I/O G ____________________________
//______________________I/O H ____________________________
//______________________I/O I ____________________________


#endif
/*------------------------------KET THUC FILE-------------------------------
 _________________________________MCA TEAM_________________________________*/