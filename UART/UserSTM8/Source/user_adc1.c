/*****************************************************************************
  *Ten Tep          :     user_adc1.c
  *Ngay             :     27/01/2016
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Dinh nghia cac ham cau hinh ADC1 trong STM8F003
  ******************************************************************************/

#include "user_adc1.h"
#if (__USER_ADC1_H!=27012016)  
    #error "Include Sai #File user_adc1.h"
#endif

//ADC1_Channel_TypeDef ADC_ChannelTable[] = {ADC1_CHANNEL_8,ADC1_CHANNEL_9};
extern uint16_t AdcValue;

#pragma vector = ADC1_EOC_vector
__interrupt void NgatAdc1(void)
{
    //uint8_t i;
    //uint32_t Sum=0;
    if(ADC1_GetFlagStatus(ADC1_FLAG_EOC)!=RESET)
    {
        ADC1_ClearFlag(ADC1_FLAG_EOC);
        /*for(i=0;i<10;i++)
            Sum+= ADC1_GetBufferValue(i);
        ValueADC=Sum/10;*/
        AdcValue = ADC1_GetConversionValue();
        ADC1->CR1 |= ADC1_CR1_ADON;
        //ADC1_StartConversion();
    }
}

/*******************************************************************************
Noi Dung    :   Cau hinh ADC1.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
*******************************************************************************/

void ADC1_Configuration(void)
{
    ADC1_DeInit();
    ADC1_ConversionConfig(ADC1_CONVERSIONMODE_SINGLE,ADC1_CHANNEL_4,ADC1_ALIGN_RIGHT);
    ADC1_PrescalerConfig(ADC1_PRESSEL_FCPU_D18);
    ADC1_DataBufferCmd(ENABLE);
    //ADC1_SetHighThreshold(ADC_HIGHT_VALUE);
    //ADC1_SetLowThreshold(ADC_LOW_VALUE);
    ADC1_ITConfig(ADC1_IT_EOCIE,ENABLE);
    //ADC1_ITConfig(ADC1_IT_AWDIE,ENABLE);
    ADC1_Cmd(ENABLE); 
}

void ADC1_SetChannel(ADC1_Channel_TypeDef AdcChannel)
{
    /* Clear the ADC1 channels */
    ADC1->CSR &= (u8)(~ADC1_CSR_CH);
    /* Select the ADC1 channel */
    ADC1->CSR |= (u8)(AdcChannel);
}

/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/