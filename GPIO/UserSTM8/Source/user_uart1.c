/*****************************************************************************
  *Ten Tep          :     user_uart1.c
  *Ngay             :     23/01/2017
  *Tac Gia          :     MCA Team
  *Cong Ty          :     MCA
  *Webside          :     mca.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     
  ******************************************************************************/

#include "user_uart1.h"

#if (_USER_UART1_H_ != 23012017)
    #error "Include sai file user_uart2.h"
#endif
/*******************************************************************************
Noi Dung    :   Ham khoi tao uart
Tham Bien   :   khong.
Tra Ve      :   Khong.
*******************************************************************************/
void uart1_init(void)
{
    UART1_DeInit();
    UART1_Init(9600,UART1_WORDLENGTH_8D,UART1_STOPBITS_1,UART1_PARITY_NO,UART1_SYNCMODE_CLOCK_DISABLE,UART1_MODE_TXRX_ENABLE);
    UART1_ITConfig(UART1_IT_RXNE,ENABLE);
    UART1_ITConfig(UART1_IT_IDLE,ENABLE);
    UART1_Cmd(ENABLE);
}
/*******************************************************************************
Noi Dung    :   Ham gui 1 ky tu qua uart
Tham Bien   :   chr
Tra Ve      :   Khong.
*******************************************************************************/
void uart1_putchar(uint8_t chr)
{
    UART1_SendData8(chr);
    while(UART1_GetFlagStatus(UART1_FLAG_TC)==0);
    UART1_ClearFlag(UART1_FLAG_TC);
}
/*******************************************************************************
Noi Dung    :   Ham gui chuoi ky tu len uart
Tham Bien   :   *s
Tra Ve      :   Khong.
*******************************************************************************/
void uart1_puts(uint8_t *s)
{
    uint8_t n,i;
    n = strlen(s);
    for(i=0;i<n;i++)
    {
        uart1_putchar(s[i]);
    }
}

/*******************************************************************************
Noi Dung    :   Ham nhan 1 ky tu
Tham Bien   :   khong
Tra Ve      :   Data_buff
*******************************************************************************/

uint8_t uart1_getchar(void)
{
    uint8_t Data_buff;
    while(UART1_GetFlagStatus(UART1_FLAG_RXNE) == 0);
    Data_buff = UART1_ReceiveData8();
    UART1_ClearFlag(UART1_FLAG_RXNE);
    return Data_buff;
}


/*------------------------------KET THUC FILE-------------------------------
 _________________________________MCA Team__________________________________*/ 