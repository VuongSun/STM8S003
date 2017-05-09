/*****************************************************************************
  *Ten Tep          :     user_adc1.h
  *Ngay             :     27/07/2016
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Khai bao cac ham cau hinh ADC1 trong STM8F003
  ******************************************************************************/

#ifndef __USER_ADC1_H
#define __USER_ADC1_H    27012016

#include "main.h"

#define ADC_HIGHT_VALUE   1000
#define ADC_LOW_VALUE     100

/*******************************************************************************
Noi Dung    :   Cau hinh ADC1.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
*******************************************************************************/

void ADC1_Configuration(void);

void ADC1_SetChannel(ADC1_Channel_TypeDef AdcChannel);

#endif 
/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/