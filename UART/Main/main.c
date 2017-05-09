/*****************************************************************************
  *Ten Tep          :     main.c
  *Ngay             :     24/12/2016
  *Tac Gia          :     MCA team
  *Cong Ty          :     MCA
  *Webside          :     mca.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Lap trinh su dung GPIO trong STM8S105C4T6
  ******************************************************************************/

#include "main.h"
#include "var.h"

#if (__MAIN_H!=24122016)
    #error "Include Sai File main.h"
#endif


/*____________________________NGAT NHAN UART__________________________________*/
#pragma vector = UART1_R_RXNE_vector
__interrupt void Ngat_Nhan_UART1 (void)
{ 
    // BAI TAP 2: Su dung dong khung de nhan du lieu
    temp = UART1_ReceiveData8();
    uart1_buff[i] = temp;
    i++;
    if(uart1_buff[0] == '%')
    {
        if(temp == '@') 
        {
            i=0;
            n = strlen(uart1_buff);
            memset(data, '\0',30);          // Restore buffer ve NULL
            memcpy(data, uart1_buff+1, n-2);  // Copy du lieu vao bien data (bo dau % di)
            //memset(uart2_buff, '\0', 10);   // Restore bo dem ve NULL
        }   
    }
    else 
    {
        i = 0;
        memset(uart1_buff, '\0', 10); 
    }
}

void main(void)
{
/********************************* SYSTEM *************************************/
    CLK_HSICmd(ENABLE);                        // Cho phep su dung nguon Clock HSI
    CLK_SYSCLKConfig(CLK_PRESCALER_HSIDIV1);   // Su dung nguon Clock co F = 16MHz  					
/*________________________________ GPIO ___________________________________*/
    GPIO_Configuration();

/********************************* TIMER *************************************/
/*________________________________ TIMER1 ___________________________________*/ 
    
/*________________________________ TIMER2 ___________________________________*/
    //TIM2_Configuration();
/*________________________________ TIMER3 ___________________________________*/

/*________________________________ TIMER4 ___________________________________*/
    //TIM4_Configuration();	
/********************************* UART2 **************************************/ 
    uart1_init();    
/********************************* IWDG ***************************************/   
    //IWDG_Configuration();
 
/********************************* EEPROM *************************************/   
    //EEPROM_Configuration();
/*________________________________ USER ___________________________________*/
    enableInterrupts();
  // lcd1602_init();
  // lcd1602_gotoxy(0,0);
  // lcd1602_puts("Data: ");
    while(1)
    {
        //BAI TAP 2: Su dung dong khung de nhan du lieu
        memset(uart1_buff, '\0', 10);   // Restore bo dem ve NULL
        if(strcmp(data,"ON LED")==0)
        {
            PORTB_5 = 0;
            delay_ms(1000);
        }
        else PORTB_5 = 1;
        uart1_puts(data);
        uart1_putchar('\n');
        delay_ms(500);  //*/
    }
}

/*------------------------------KET THUC FILE-------------------------------
 _________________________________MCA Team__________________________________*/ 