/*****************************************************************************
  *Ten Tep          :     user_uart1.h
  *Ngay             :     23/01/2017
  *Tac Gia          :     MCA Team
  *Cong Ty          :     MCA
  *Webside          :     mca.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Dinh nghia su dung chuc nang uart
  ******************************************************************************/

#ifndef _USER_UART1_H_
#define _USER_UART1_H_  23012017

#include "main.h"

void uart1_init(void);
void uart1_putchar(uint8_t chr);
void uart1_puts(uint8_t *s);
uint8_t uart1_getchar(void);

#endif

/*------------------------------KET THUC FILE-------------------------------
 _________________________________MCA Team__________________________________*/ 