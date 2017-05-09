/*****************************************************************************
  *Ten Tep          :     main.c
  *Ngay             :     6/5/2017
  *Tac Gia          :     VuongSun
  *Cong Ty          :     Fsoft
  *mail             :     minhvuong2302@gmail.com
  *Phien Ban        :     V1.0
  *Tom Tat          :     
  ******************************************************************************/
  
#include "main.h"
#include "var.h"

#if (__MAIN_H!=652017)
    #error "Includes Sai File main.h"
#endif

//#pragma vector=TIM4_OVR_UIF_vector
//__interrupt void NgatTranTimer4(void)
//{
  //  TIM4_ClearFlag(TIM4_FLAG_UPDATE);     
  //  IWDG_ReloadCounter();
//}

void main(void)
{
/********************************* SYSTEM *************************************/
    CLK_HSICmd(ENABLE);
    CLK_SYSCLKConfig(CLK_PRESCALER_HSIDIV1);     					
/*________________________________ GPIO ___________________________________*/
    GPIO_Configuration();
/********************************* TIMER *************************************/
/*________________________________ TIMER1 ___________________________________*/
    //TIM1_Configuration();
    
/*________________________________ TIMER2 ___________________________________*/
    //TIM2_Configuration();

/*________________________________ TIMER4 ___________________________________*/
 //   TIM4_Configuration();	
       
/********************************* IWDG *************************************/   
//  IWDG_Configuration();
 
/********************************* EEPROM *************************************/   
    //EEPROM_Configuration();   
     
    enableInterrupts();    // Cho phep ngat toan cuc 
    while(1)
    {
        PORTB_5 = ~PORTB_5;
        delay_ms(100);
    }    
}

/*------------------------------KET THUC FILE-------------------------------
 _________________________________MCA TEAM_________________________________*/