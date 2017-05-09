/**
  ******************************************************************************
  * @file STM8_TSL_RC_Internal.h
  * @brief RC Touch Sensing Library for STM8 CPU family.
  * TSL Internal variable definitions.
  * @author STMicroelectronics - MCD Application Team
  * @version V1.3.0
  * @date 29-OCT-2009
  ******************************************************************************
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2009 STMicroelectronics</center></h2>
  * @image html logo.bmp
  ******************************************************************************
  */

#ifndef __TSL_INTERNAL__
#define __TSL_INTERNAL__

#include "STM8_TSL_RC_IODriver.h"
#include "STM8_TSL_RC_API.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//-----             LOCAL VARIABLE DEFINITION                            -----
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
extern u8 TINY KeyIndex, ChannelIndex;
extern s16 TINY Delta;
extern s16 TINY Delta1;
extern s16 TINY Delta2;
extern s16 TINY Delta3;
extern KeyFlag_T TINY TSL_TempGlobalSetting;
extern KeyState_T TINY TSL_TempGlobalState;
extern u8 TINY Local_TickECS10ms;
extern TimerFlag_T TINY Local_TickFlag;
extern u8 TINY ECSTimeStepCounter;
extern u8 ECSTempoCounter;
extern u8 ECSTempoPrescaler;

#endif /* __TSL_INTERNAL__ */

/*********************** (c) 2009 STMicroelectronics **************************/
