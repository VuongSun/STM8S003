/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"
#include "stdio.h"
#include "stm8s_uart1.h"
#include "stm8s_conf.h"

int putchar (int c);  // functions Putchar --> UART
int getchar (void);   // functions Getchar --> UART
char echo;
void main(void)
{
  
  /*High speed internal clock prescaler: 1*/
    CLK_DeInit();
    CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);      //f_Master = HSI/1 = 16MHz
    CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);            //f_CPU = f_Master/1 = 16MHz
    while(CLK_GetFlagStatus(CLK_FLAG_HSIRDY)!=SET);     //wait until HSI ready
    
  
    UART1_DeInit();
  /* UART1 configuration ------------------------------------------------------*/
  /* UART1 configured as follow:
        - BaudRate = 9600 baud  
        - Word Length = 8 Bits
        - One Stop Bit
        - No parity
        - Receive and transmit enabled
        - UART1 Clock disabled
  */
  UART1_Init(9600, UART1_WORDLENGTH_8D, UART1_STOPBITS_1, UART1_PARITY_NO,
              UART1_SYNCMODE_CLOCK_DISABLE, UART1_MODE_TXRX_ENABLE);

  
  
  while (1)
  {
    echo = getchar();
    printf("%c", echo);  
   
  }
}

/////////////////////// Functions /////////////////////////////////
int putchar (int c)
{
  /* Write a character to the UART1 */
  UART1_SendData8(c);
  /* Loop until the end of transmission */
  while (UART1_GetFlagStatus(UART1_FLAG_TXE) == RESET);

  return (c); 
}
///////////////////

int getchar (void)
{
  int c = 0;
  /* Loop until the Read data register flag is SET */
  while (UART1_GetFlagStatus(UART1_FLAG_RXNE) == RESET);
    c = UART1_ReceiveData8();
  return (c);
}