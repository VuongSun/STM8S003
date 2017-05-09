/*****************************************************************************
  *Ten Tep          :     main.h
  *Ngay             :     24/12/2016
  *Tac Gia          :     MCA team
  *Cong Ty          :     MCA
  *Webside          :     mca.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Khai bao cac thu vien.
  *                      Cau hinh mot so chuc nang cho trinh bien dich.
  *                      Cau hinh mot so chuc nang cho CHIP.
  *                      Dinh nghia I/O.
  *
  *
  *****************************************************************************/

#ifndef __MAIN_H
#define __MAIN_H    24122016    

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
#include "stm8s_clk.h"
#include "stm8s_uart1.h"
/******************************************************************************
  USERSTM8 LIB - USERSTM8 LIB - USERSTM8 LIB - USERSTM8 LIB - USERSTM8 LIB 
******************************************************************************/
#include "user_delay.h"
#include "user_gpio.h"
#include "user_uart1.h"
#include "user_timer.h"
/******************************************************************************
  USER LIB - USER LIB - USER LIB - USER LIB - USER LIB - USER LIB - USER LIB
******************************************************************************/
#include "lcd1602.h"
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
/******************************************************************************
USER DEFINE - USER DEFINE - USER DEFINE - USER DEFINE - USER DEFINE - USER DEFI 
******************************************************************************/
#define LCD_RS      PORTB_7
#define LCD_RW      PORTB_6
#define LCD_E       PORTB_5
#define LCD_D4      PORTB_4
#define LCD_D5      PORTB_3
#define LCD_D6      PORTB_2
#define LCD_D7      PORTB_1

#endif

/*------------------------------KET THUC FILE-------------------------------
 _________________________________MCA Team__________________________________*/  