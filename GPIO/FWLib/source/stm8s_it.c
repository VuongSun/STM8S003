/**
  ******************************************************************************
  * @file stm8s_it.c
  * @brief This file contains all the interrupt routines, for Cosmic compiler.
  * @author STMicroelectronics - MCD Application Team
  * @version V2.3.1
  * @date    14-February-2011
  ******************************************************************************
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  * @image html logo.bmp
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm8s_it.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Public functions ----------------------------------------------------------*/

/** @addtogroup IT_Functions
  * @{
  */
#ifdef _COSMIC_
/**
  * @brief Dummy interrupt routine
  * @par Parameters:
  * None
  * @retval
  * None
*/

INTERRUPT_HANDLER(NonHandledInterrupt,0)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
#endif

/**
  * @brief TRAP interrupt routine
  * @par Parameters:
  * None
  * @retval
  * None
*/
INTERRUPT_HANDLER_TRAP(TRAP_IRQHandler)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
/**
  * @brief Top Level Interrupt Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TLI_IRQHandler,0)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief Auto Wake Up Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(AWU_IRQHandler,1)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief Clock Controller Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(CLK_IRQHandler,2)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief External Interrupt PORTA Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(EXTI_PORTA_IRQHandler,3)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief External Interrupt PORTB Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
*/
INTERRUPT_HANDLER(EXTI_PORTB_IRQHandler,4)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief External Interrupt PORTC Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(EXTI_PORTC_IRQHandler,5)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief External Interrupt PORTD Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(EXTI_PORTD_IRQHandler,6)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief External Interrupt PORTE Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(EXTI_PORTE_IRQHandler,7)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
#ifdef STM8S903
/**
  * @brief External Interrupt PORTF Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(EXTI_PORTF_IRQHandler,8)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
#endif /*STM8S903*/

#ifdef STM8S208
/**
  * @brief CAN RX Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(CAN_RX_IRQHandler,8)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief CAN TX Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(CAN_TX_IRQHandler,9)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
#endif /*STM8S208*/

/**
  * @brief SPI Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(SPI_IRQHandler,10)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief Timer1 Update/Overflow/Trigger/Break Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM1_UPD_OVF_TRG_BRK_IRQHandler,11)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
	GPIO_WriteReverse(GPIOD, GPIO_PIN_0|GPIO_PIN_2|GPIO_PIN_3);

}

/**
  * @brief Timer1 Capture/Compare Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM1_CAP_COM_IRQHandler,12)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

#ifdef STM8S903
/**
  * @brief Timer5 Update/Overflow/Break/Trigger Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM5_UPD_OVF_BRK_TRG_IRQHandler,13)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
/**
  * @brief Timer5 Capture/Compare Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM5_CAP_COM_IRQHandler,14)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

#else /*STM8S208, STM8S207, STM8S105 or STM8S103*/
/**
  * @brief Timer2 Update/Overflow/Break Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM2_UPD_OVF_BRK_IRQHandler,13)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief Timer2 Capture/Compare Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM2_CAP_COM_IRQHandler,14)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
#endif /*STM8S903*/

#if defined (STM8S208) || defined(STM8S207) || defined(STM8S105)
/**
  * @brief Timer3 Update/Overflow/Break Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM3_UPD_OVF_BRK_IRQHandler,15)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @brief Timer3 Capture/Compare Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM3_CAP_COM_IRQHandler,16)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
#endif /*STM8S208, STM8S207 or STM8S105*/

#ifndef STM8S105
/**
  * @brief UART1 TX Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(UART1_TX_IRQHandler,17)
{
    /* In order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction.
    */
}

/**
  * @brief UART1 RX Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(UART1_RX_IRQHandler,18)
{
    /* In order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction.
    */
}
#endif /*STM8S105*/

/**
  * @brief I2C Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(I2C_IRQHandler,19)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

#ifdef STM8S105
/**
  * @brief UART2 TX interrupt routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(UART2_TX_IRQHandler,20)
{
    /* In order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction.
    */
}

/**
  * @brief UART2 RX interrupt routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(UART2_RX_IRQHandler,21)
{
    /* In order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction.
    */
}
#endif /* STM8S105*/

#if defined(STM8S207) || defined(STM8S208)
/**
  * @brief UART3 TX interrupt routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(UART3_TX_IRQHandler,20)
{
    /* In order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction.
    */
}

/**
  * @brief UART3 RX interrupt routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(UART3_RX_IRQHandler,21)
{
    /* In order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction.
    */
}
#endif /*STM8S208 or STM8S207*/

#if defined(STM8S207) || defined(STM8S208)
/**
  * @brief ADC2 interrupt routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(ADC2_IRQHandler,22)
{
    /* In order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction.
    */
}
#else /*STM8S105, STM8S103 or STM8S903*/
/**
  * @brief ADC1 interrupt routine.
  * @par Parameters:
  * None
  * @retval 
  * None
  */
INTERRUPT_HANDLER(ADC1_IRQHandler,22)
{
    /* In order to detect unexpected events during development,
       it is recommended to set a breakpoint on the following instruction.
    */
}
#endif /*STM8S208 or STM8S207*/
#ifndef __TSL_TIMEBASE_H
#if defined(STM8S903)
/**
  * @brief Timer6 Update/Overflow/Trigger Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM6_UPD_OVF_TRG_IRQHandler,23)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
#else /*STM8S208, STM8S207, STM8S105 or STM8S103*/
/**
  * @brief Timer4 Update/Overflow Interruption routine.
  * @par Parameters:
  * None
  * @retval
  * None
  */
INTERRUPT_HANDLER(TIM4_UPD_OVF_IRQHandler,23)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}
#endif /*STM8S903*/
#endif /*__TSL_TIMEBASE_H */
/**
  * @brief Eeprom EEC Interruption routine.
  * @par Parameters:
  * None
  * @retval
	* None
  */
INTERRUPT_HANDLER(EEPROM_EEC_IRQHandler,24)
{
  /* In order to detect unexpected events during development,
     it is recommended to set a breakpoint on the following instruction.
  */
}

/**
  * @}
  */

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/