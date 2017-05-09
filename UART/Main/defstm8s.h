/*****************************************************************************
  *Ten Tep          :     defstm8s.h
  *Ngay             :     6/5/2017
  *Tac Gia          :     VuongSun
  *Cong Ty          :     Fsoft
  *mail             :     minhvuong2302@gmail.com
  *Phien Ban        :     V1.0
  *Tom Tat          :     Dinh nghia cac chan I/O cho chip STM8S
  *           
  *
  ******************************************************************************
  * Chu Y      :          
  *                          
  *                      
  ******************************************************************************
  */
#ifndef __DEFSTM8S_H
#define __DEFSTM8S_H
#include "defstm8s103f3.h"
/***************************************************************
|________|_______|_______|_____________|
|        |       |       |             |
|REGISTER| MODE  | VALUE | DESCRIPTION |
|________|_______|_______|_____________|
|        |       |       |             |
|  CR1   | Input |   0   |  Floating   |
|________|_______|_______|_____________|
|        |       |       |             |
|  CR1   | Input |   1   |   Pull Up   |
|________|_______|_______|_____________|
|        |       |       |             |
|  CR1   |Output |   0   |  Open Drain |
|________|_______|_______|_____________|
|        |       |       |             |
|  CR1   |Output |   1   |  Push Pull  |
|________|_______|_______|_____________|
|________|_______|_______|_____________|
|        |       |       |             |
|  CR2   | Input |   0   |  Interrupt  |
|        |       |       |   Disable   | 
|________|_______|_______|_____________|
|        |       |       |             |
|  CR2   | Input |   1   |   Interrupt |
|        |       |       |    Enable   |
|________|_______|_______|_____________|
|        |       |       |             |
|  CR2   |Output |   0   | OutPut 2Mhz |
|________|_______|_______|_____________|
|        |       |       |             |
|  CR2   |Output |   1   |OutPut 10Mhz |
|________|_______|_______|_____________|
***************************************************************/
/*************************************************************
              PORTA - PINA - DDRA - CRA1 - CRA2
*************************************************************/
//++++++++++++++++++++++++  PORTA  ++++++++++++++++++++++++++++
#define PORTA                   PA_ODR
#define PORTA_0                 PA_ODR_ODR0
#define PORTA_1                 PA_ODR_ODR1
#define PORTA_2                 PA_ODR_ODR2
#define PORTA_3                 PA_ODR_ODR3
#define PORTA_4                 PA_ODR_ODR4
#define PORTA_5                 PA_ODR_ODR5
#define PORTA_6                 PA_ODR_ODR6
#define PORTA_7                 PA_ODR_ODR7
//++++++++++++++++++++++++  PINA  ++++++++++++++++++++++++++++
#define PINA                    PA_IDR
#define PINA_0                  PA_IDR_IDR0
#define PINA_1                  PA_IDR_IDR1
#define PINA_2                  PA_IDR_IDR2
#define PINA_3                  PA_IDR_IDR3
#define PINA_4                  PA_IDR_IDR4
#define PINA_5                  PA_IDR_IDR5
#define PINA_6                  PA_IDR_IDR6
#define PINA_7                  PA_IDR_IDR7
//++++++++++++++++++++++++  DDRA  ++++++++++++++++++++++++++++
#define DDRA                    PA_DDR
#define DDRA_0                  PA_DDR_DDR0
#define DDRA_1                  PA_DDR_DDR1
#define DDRA_2                  PA_DDR_DDR2
#define DDRA_3                  PA_DDR_DDR3
#define DDRA_4                  PA_DDR_DDR4
#define DDRA_5                  PA_DDR_DDR5
#define DDRA_6                  PA_DDR_DDR6
#define DDRA_7                  PA_DDR_DDR7
//++++++++++++++++++++++++  CRA1  ++++++++++++++++++++++++++++
#define CRA1                    PA_CR1
#define CRA1_0                  PA_CR1_C10
#define CRA1_1                  PA_CR1_C11
#define CRA1_2                  PA_CR1_C12
#define CRA1_3                  PA_CR1_C13
#define CRA1_4                  PA_CR1_C14
#define CRA1_5                  PA_CR1_C15
#define CRA1_6                  PA_CR1_C16
#define CRA1_7                  PA_CR1_C17
//++++++++++++++++++++++++  CRA2  ++++++++++++++++++++++++++++
#define CRA2                    PA_CR2
#define CRA2_0                  PA_CR2_C20 
#define CRA2_1                  PA_CR2_C21 
#define CRA2_2                  PA_CR2_C22 
#define CRA2_3                  PA_CR2_C23 
#define CRA2_4                  PA_CR2_C24 
#define CRA2_5                  PA_CR2_C25 
#define CRA2_6                  PA_CR2_C26 
#define CRA2_7                  PA_CR2_C27 
/*************************************************************
              PORTB - PINB - DDRB - CRB1 - CRB2
*************************************************************/
//++++++++++++++++++++++++  PORTB  ++++++++++++++++++++++++++++
#define PORTB                   PB_ODR
#define PORTB_0                 PB_ODR_ODR0
#define PORTB_1                 PB_ODR_ODR1
#define PORTB_2                 PB_ODR_ODR2
#define PORTB_3                 PB_ODR_ODR3
#define PORTB_4                 PB_ODR_ODR4
#define PORTB_5                 PB_ODR_ODR5
#define PORTB_6                 PB_ODR_ODR6
#define PORTB_7                 PB_ODR_ODR7
//++++++++++++++++++++++++  PINB  ++++++++++++++++++++++++++++
#define PINB                    PB_IDR
#define PINB_0                  PB_IDR_IDR0
#define PINB_1                  PB_IDR_IDR1
#define PINB_2                  PB_IDR_IDR2
#define PINB_3                  PB_IDR_IDR3
#define PINB_4                  PB_IDR_IDR4
#define PINB_5                  PB_IDR_IDR5
#define PINB_6                  PB_IDR_IDR6
#define PINB_7                  PB_IDR_IDR7
//++++++++++++++++++++++++  DDRB  ++++++++++++++++++++++++++++
#define DDRB                    PB_DDR
#define DDRB_0                  PB_DDR_DDR0
#define DDRB_1                  PB_DDR_DDR1
#define DDRB_2                  PB_DDR_DDR2
#define DDRB_3                  PB_DDR_DDR3
#define DDRB_4                  PB_DDR_DDR4
#define DDRB_5                  PB_DDR_DDR5
#define DDRB_6                  PB_DDR_DDR6
#define DDRB_7                  PB_DDR_DDR7
//++++++++++++++++++++++++  CRB1  ++++++++++++++++++++++++++++
#define CRB1                    PB_CR1
#define CRB1_0                  PB_CR1_C10
#define CRB1_1                  PB_CR1_C11
#define CRB1_2                  PB_CR1_C12
#define CRB1_3                  PB_CR1_C13
#define CRB1_4                  PB_CR1_C14
#define CRB1_5                  PB_CR1_C15
#define CRB1_6                  PB_CR1_C16
#define CRB1_7                  PB_CR1_C17
//++++++++++++++++++++++++  CRB2  ++++++++++++++++++++++++++++
#define CRB2                    PB_CR2
#define CRB2_0                  PB_CR2_C20 
#define CRB2_1                  PB_CR2_C21 
#define CRB2_2                  PB_CR2_C22 
#define CRB2_3                  PB_CR2_C23 
#define CRB2_4                  PB_CR2_C24 
#define CRB2_5                  PB_CR2_C25 
#define CRB2_6                  PB_CR2_C26 
#define CRB2_7                  PB_CR2_C27
/*************************************************************
              PORTC - PINC - DDRC - CRC1 - CRC2
*************************************************************/
//++++++++++++++++++++++++  PORTC  ++++++++++++++++++++++++++++
#define PORTC                   PC_ODR
#define PORTC_0                 PC_ODR_ODR0
#define PORTC_1                 PC_ODR_ODR1
#define PORTC_2                 PC_ODR_ODR2
#define PORTC_3                 PC_ODR_ODR3
#define PORTC_4                 PC_ODR_ODR4
#define PORTC_5                 PC_ODR_ODR5
#define PORTC_6                 PC_ODR_ODR6
#define PORTC_7                 PC_ODR_ODR7
//++++++++++++++++++++++++  PINC  ++++++++++++++++++++++++++++
#define PINC                    PC_IDR
#define PINC_0                  PC_IDR_IDR0
#define PINC_1                  PC_IDR_IDR1
#define PINC_2                  PC_IDR_IDR2
#define PINC_3                  PC_IDR_IDR3
#define PINC_4                  PC_IDR_IDR4
#define PINC_5                  PC_IDR_IDR5
#define PINC_6                  PC_IDR_IDR6
#define PINC_7                  PC_IDR_IDR7
//++++++++++++++++++++++++  DDRC  ++++++++++++++++++++++++++++
#define DDRC                    PC_DDR
#define DDRC_0                  PC_DDR_DDR0
#define DDRC_1                  PC_DDR_DDR1
#define DDRC_2                  PC_DDR_DDR2
#define DDRC_3                  PC_DDR_DDR3
#define DDRC_4                  PC_DDR_DDR4
#define DDRC_5                  PC_DDR_DDR5
#define DDRC_6                  PC_DDR_DDR6
#define DDRC_7                  PC_DDR_DDR7
//++++++++++++++++++++++++  CRC1  ++++++++++++++++++++++++++++
#define CRC1                    PC_CR1
#define CRC1_0                  PC_CR1_C10
#define CRC1_1                  PC_CR1_C11
#define CRC1_2                  PC_CR1_C12
#define CRC1_3                  PC_CR1_C13
#define CRC1_4                  PC_CR1_C14
#define CRC1_5                  PC_CR1_C15
#define CRC1_6                  PC_CR1_C16
#define CRC1_7                  PC_CR1_C17
//++++++++++++++++++++++++  CRC2  ++++++++++++++++++++++++++++
#define CRC2                    PC_CR2
#define CRC2_0                  PC_CR2_C20 
#define CRC2_1                  PC_CR2_C21 
#define CRC2_2                  PC_CR2_C22 
#define CRC2_3                  PC_CR2_C23 
#define CRC2_4                  PC_CR2_C24 
#define CRC2_5                  PC_CR2_C25 
#define CRC2_6                  PC_CR2_C26 
#define CRC2_7                  PC_CR2_C27
/*************************************************************
              PORTD - PIND - DDRD - CRD1 - CRD2
*************************************************************/
//++++++++++++++++++++++++  PORTD  ++++++++++++++++++++++++++++
#define PORTD                   PD_ODR
#define PORTD_0                 PD_ODR_ODR0
#define PORTD_1                 PD_ODR_ODR1
#define PORTD_2                 PD_ODR_ODR2
#define PORTD_3                 PD_ODR_ODR3
#define PORTD_4                 PD_ODR_ODR4
#define PORTD_5                 PD_ODR_ODR5
#define PORTD_6                 PD_ODR_ODR6
#define PORTD_7                 PD_ODR_ODR7
//++++++++++++++++++++++++  PIND  ++++++++++++++++++++++++++++
#define PIND                    PD_IDR
#define PIND_0                  PD_IDR_IDR0
#define PIND_1                  PD_IDR_IDR1
#define PIND_2                  PD_IDR_IDR2
#define PIND_3                  PD_IDR_IDR3
#define PIND_4                  PD_IDR_IDR4
#define PIND_5                  PD_IDR_IDR5
#define PIND_6                  PD_IDR_IDR6
#define PIND_7                  PD_IDR_IDR7
//++++++++++++++++++++++++  DDRD  ++++++++++++++++++++++++++++
#define DDRD                    PD_DDR
#define DDRD_0                  PD_DDR_DDR0
#define DDRD_1                  PD_DDR_DDR1
#define DDRD_2                  PD_DDR_DDR2
#define DDRD_3                  PD_DDR_DDR3
#define DDRD_4                  PD_DDR_DDR4
#define DDRD_5                  PD_DDR_DDR5
#define DDRD_6                  PD_DDR_DDR6
#define DDRD_7                  PD_DDR_DDR7
//++++++++++++++++++++++++  CRD1  ++++++++++++++++++++++++++++
#define CRD1                    PD_CR1
#define CRD1_0                  PD_CR1_C10
#define CRD1_1                  PD_CR1_C11
#define CRD1_2                  PD_CR1_C12
#define CRD1_3                  PD_CR1_C13
#define CRD1_4                  PD_CR1_C14
#define CRD1_5                  PD_CR1_C15
#define CRD1_6                  PD_CR1_C16
#define CRD1_7                  PD_CR1_C17
//++++++++++++++++++++++++  CRD2  ++++++++++++++++++++++++++++
#define CRD2                    PD_CR2
#define CRD2_0                  PD_CR2_C20 
#define CRD2_1                  PD_CR2_C21 
#define CRD2_2                  PD_CR2_C22 
#define CRD2_3                  PD_CR2_C23 
#define CRD2_4                  PD_CR2_C24 
#define CRD2_5                  PD_CR2_C25 
#define CRD2_6                  PD_CR2_C26 
#define CRD2_7                  PD_CR2_C27
/*************************************************************
              PORTE - PINE - DDRE - CRE1 - CRE2
*************************************************************/
//++++++++++++++++++++++++  PORTE  ++++++++++++++++++++++++++++
#define PORTE                   PE_ODR
#define PORTE_0                 PE_ODR_ODR0
#define PORTE_1                 PE_ODR_ODR1
#define PORTE_2                 PE_ODR_ODR2
#define PORTE_3                 PE_ODR_ODR3
#define PORTE_4                 PE_ODR_ODR4
#define PORTE_5                 PE_ODR_ODR5
#define PORTE_6                 PE_ODR_ODR6
#define PORTE_7                 PE_ODR_ODR7
//++++++++++++++++++++++++  PINE  ++++++++++++++++++++++++++++
#define PINE                    PE_IDR
#define PINE_0                  PE_IDR_IDR0
#define PINE_1                  PE_IDR_IDR1
#define PINE_2                  PE_IDR_IDR2
#define PINE_3                  PE_IDR_IDR3
#define PINE_4                  PE_IDR_IDR4
#define PINE_5                  PE_IDR_IDR5
#define PINE_6                  PE_IDR_IDR6
#define PINE_7                  PE_IDR_IDR7
//++++++++++++++++++++++++  DDRE  ++++++++++++++++++++++++++++
#define DDRE                    PE_DDR
#define DDRE_0                  PE_DDR_DDR0
#define DDRE_1                  PE_DDR_DDR1
#define DDRE_2                  PE_DDR_DDR2
#define DDRE_3                  PE_DDR_DDR3
#define DDRE_4                  PE_DDR_DDR4
#define DDRE_5                  PE_DDR_DDR5
#define DDRE_6                  PE_DDR_DDR6
#define DDRE_7                  PE_DDR_DDR7
//++++++++++++++++++++++++  CRE1  ++++++++++++++++++++++++++++
#define CRE1                    PE_CR1
#define CRE1_0                  PE_CR1_C10
#define CRE1_1                  PE_CR1_C11
#define CRE1_2                  PE_CR1_C12
#define CRE1_3                  PE_CR1_C13
#define CRE1_4                  PE_CR1_C14
#define CRE1_5                  PE_CR1_C15
#define CRE1_6                  PE_CR1_C16
#define CRE1_7                  PE_CR1_C17
//++++++++++++++++++++++++  CRE2  ++++++++++++++++++++++++++++
#define CRE2                    PE_CR2
#define CRE2_0                  PE_CR2_C20 
#define CRE2_1                  PE_CR2_C21 
#define CRE2_2                  PE_CR2_C22 
#define CRE2_3                  PE_CR2_C23 
#define CRE2_4                  PE_CR2_C24 
#define CRE2_5                  PE_CR2_C25 
#define CRE2_6                  PE_CR2_C26 
#define CRE2_7                  PE_CR2_C27
/*************************************************************
              PORTF - PINF - DDRF - CRF1 - CRF2
*************************************************************/
//++++++++++++++++++++++++  PORTF  ++++++++++++++++++++++++++++
#define PORTF                   PF_ODR
#define PORTF_0                 PF_ODR_ODR0
#define PORTF_1                 PF_ODR_ODR1
#define PORTF_2                 PF_ODR_ODR2
#define PORTF_3                 PF_ODR_ODR3
#define PORTF_4                 PF_ODR_ODR4
#define PORTF_5                 PF_ODR_ODR5
#define PORTF_6                 PF_ODR_ODR6
#define PORTF_7                 PF_ODR_ODR7
//++++++++++++++++++++++++  PINF  ++++++++++++++++++++++++++++
#define PINF                    PF_IDR
#define PINF_0                  PF_IDR_IDR0
#define PINF_1                  PF_IDR_IDR1
#define PINF_2                  PF_IDR_IDR2
#define PINF_3                  PF_IDR_IDR3
#define PINF_4                  PF_IDR_IDR4
#define PINF_5                  PF_IDR_IDR5
#define PINF_6                  PF_IDR_IDR6
#define PINF_7                  PF_IDR_IDR7
//++++++++++++++++++++++++  DDRF  ++++++++++++++++++++++++++++
#define DDRF                    PF_DDR
#define DDRF_0                  PF_DDR_DDR0
#define DDRF_1                  PF_DDR_DDR1
#define DDRF_2                  PF_DDR_DDR2
#define DDRF_3                  PF_DDR_DDR3
#define DDRF_4                  PF_DDR_DDR4
#define DDRF_5                  PF_DDR_DDR5
#define DDRF_6                  PF_DDR_DDR6
#define DDRF_7                  PF_DDR_DDR7
//++++++++++++++++++++++++  CRF1  ++++++++++++++++++++++++++++
#define CRF1                    PF_CR1
#define CRF1_0                  PF_CR1_C10
#define CRF1_1                  PF_CR1_C11
#define CRF1_2                  PF_CR1_C12
#define CRF1_3                  PF_CR1_C13
#define CRF1_4                  PF_CR1_C14
#define CRF1_5                  PF_CR1_C15
#define CRF1_6                  PF_CR1_C16
#define CRF1_7                  PF_CR1_C17
//++++++++++++++++++++++++  CRF2  ++++++++++++++++++++++++++++
#define CRF2                    PF_CR2
#define CRF2_0                  PF_CR2_C20 
#define CRF2_1                  PF_CR2_C21 
#define CRF2_2                  PF_CR2_C22 
#define CRF2_3                  PF_CR2_C23 
#define CRF2_4                  PF_CR2_C24 
#define CRF2_5                  PF_CR2_C25 
#define CRF2_6                  PF_CR2_C26 
#define CRF2_7                  PF_CR2_C27
/*************************************************************
              PORTG - PING - DDRG - CRG1 - CRG2
*************************************************************/
//++++++++++++++++++++++++  PORTG  ++++++++++++++++++++++++++++
#define PORTG                   PG_ODR
#define PORTG_0                 PG_ODR_ODR0
#define PORTG_1                 PG_ODR_ODR1
#define PORTG_2                 PG_ODR_ODR2
#define PORTG_3                 PG_ODR_ODR3
#define PORTG_4                 PG_ODR_ODR4
#define PORTG_5                 PG_ODR_ODR5
#define PORTG_6                 PG_ODR_ODR6
#define PORTG_7                 PG_ODR_ODR7
//++++++++++++++++++++++++  PING  ++++++++++++++++++++++++++++
#define PING                    PG_IDR
#define PING_0                  PG_IDR_IDR0
#define PING_1                  PG_IDR_IDR1
#define PING_2                  PG_IDR_IDR2
#define PING_3                  PG_IDR_IDR3
#define PING_4                  PG_IDR_IDR4
#define PING_5                  PG_IDR_IDR5
#define PING_6                  PG_IDR_IDR6
#define PING_7                  PG_IDR_IDR7
//++++++++++++++++++++++++  DDRG  ++++++++++++++++++++++++++++
#define DDRG                    PG_DDR
#define DDRG_0                  PG_DDR_DDR0
#define DDRG_1                  PG_DDR_DDR1
#define DDRG_2                  PG_DDR_DDR2
#define DDRG_3                  PG_DDR_DDR3
#define DDRG_4                  PG_DDR_DDR4
#define DDRG_5                  PG_DDR_DDR5
#define DDRG_6                  PG_DDR_DDR6
#define DDRG_7                  PG_DDR_DDR7
//++++++++++++++++++++++++  CRG1  ++++++++++++++++++++++++++++
#define CRG1                    PG_CR1
#define CRG1_0                  PG_CR1_C10
#define CRG1_1                  PG_CR1_C11
#define CRG1_2                  PG_CR1_C12
#define CRG1_3                  PG_CR1_C13
#define CRG1_4                  PG_CR1_C14
#define CRG1_5                  PG_CR1_C15
#define CRG1_6                  PG_CR1_C16
#define CRG1_7                  PG_CR1_C17
//++++++++++++++++++++++++  CRG2  ++++++++++++++++++++++++++++
#define CRG2                    PG_CR2
#define CRG2_0                  PG_CR2_C20 
#define CRG2_1                  PG_CR2_C21 
#define CRG2_2                  PG_CR2_C22 
#define CRG2_3                  PG_CR2_C23 
#define CRG2_4                  PG_CR2_C24 
#define CRG2_5                  PG_CR2_C25 
#define CRG2_6                  PG_CR2_C26 
#define CRG2_7                  PG_CR2_C27
/*************************************************************
              PORTH - PINH - DDRH - CRH1 - CRH2
*************************************************************/
//++++++++++++++++++++++++  PORTH  ++++++++++++++++++++++++++++
#define PORTH                   PH_ODR
#define PORTH_0                 PH_ODR_ODR0
#define PORTH_1                 PH_ODR_ODR1
#define PORTH_2                 PH_ODR_ODR2
#define PORTH_3                 PH_ODR_ODR3
#define PORTH_4                 PH_ODR_ODR4
#define PORTH_5                 PH_ODR_ODR5
#define PORTH_6                 PH_ODR_ODR6
#define PORTH_7                 PH_ODR_ODR7
//++++++++++++++++++++++++  PINH  ++++++++++++++++++++++++++++
#define PINH                    PH_IDR
#define PINH_0                  PH_IDR_IDR0
#define PINH_1                  PH_IDR_IDR1
#define PINH_2                  PH_IDR_IDR2
#define PINH_3                  PH_IDR_IDR3
#define PINH_4                  PH_IDR_IDR4
#define PINH_5                  PH_IDR_IDR5
#define PINH_6                  PH_IDR_IDR6
#define PINH_7                  PH_IDR_IDR7
//++++++++++++++++++++++++  DDRH  ++++++++++++++++++++++++++++
#define DDRH                    PH_DDR
#define DDRH_0                  PH_DDR_DDR0
#define DDRH_1                  PH_DDR_DDR1
#define DDRH_2                  PH_DDR_DDR2
#define DDRH_3                  PH_DDR_DDR3
#define DDRH_4                  PH_DDR_DDR4
#define DDRH_5                  PH_DDR_DDR5
#define DDRH_6                  PH_DDR_DDR6
#define DDRH_7                  PH_DDR_DDR7
//++++++++++++++++++++++++  CRH1  ++++++++++++++++++++++++++++
#define CRH1                    PH_CR1
#define CRH1_0                  PH_CR1_C10
#define CRH1_1                  PH_CR1_C11
#define CRH1_2                  PH_CR1_C12
#define CRH1_3                  PH_CR1_C13
#define CRH1_4                  PH_CR1_C14
#define CRH1_5                  PH_CR1_C15
#define CRH1_6                  PH_CR1_C16
#define CRH1_7                  PH_CR1_C17
//++++++++++++++++++++++++  CRH2  ++++++++++++++++++++++++++++
#define CRH2                    PH_CR2
#define CRH2_0                  PH_CR2_C20 
#define CRH2_1                  PH_CR2_C21 
#define CRH2_2                  PH_CR2_C22 
#define CRH2_3                  PH_CR2_C23 
#define CRH2_4                  PH_CR2_C24 
#define CRH2_5                  PH_CR2_C25 
#define CRH2_6                  PH_CR2_C26 
#define CRH2_7                  PH_CR2_C27
/*************************************************************
              PORTI - PINI - DDRI - CRI1 - CRI2
*************************************************************/
//++++++++++++++++++++++++  PORTI  ++++++++++++++++++++++++++++
#define PORTI                   PI_ODR
#define PORTI_0                 PI_ODR_ODR0
#define PORTI_1                 PI_ODR_ODR1
#define PORTI_2                 PI_ODR_ODR2
#define PORTI_3                 PI_ODR_ODR3
#define PORTI_4                 PI_ODR_ODR4
#define PORTI_5                 PI_ODR_ODR5
#define PORTI_6                 PI_ODR_ODR6
#define PORTI_7                 PI_ODR_ODR7
//++++++++++++++++++++++++  PINI  ++++++++++++++++++++++++++++
#define PINI                    PI_IDR
#define PINI_0                  PI_IDR_IDR0
#define PINI_1                  PI_IDR_IDR1
#define PINI_2                  PI_IDR_IDR2
#define PINI_3                  PI_IDR_IDR3
#define PINI_4                  PI_IDR_IDR4
#define PINI_5                  PI_IDR_IDR5
#define PINI_6                  PI_IDR_IDR6
#define PINI_7                  PI_IDR_IDR7
//++++++++++++++++++++++++  DDRI  ++++++++++++++++++++++++++++
#define DDRI                    PI_DDR
#define DDRI_0                  PI_DDR_DDR0
#define DDRI_1                  PI_DDR_DDR1
#define DDRI_2                  PI_DDR_DDR2
#define DDRI_3                  PI_DDR_DDR3
#define DDRI_4                  PI_DDR_DDR4
#define DDRI_5                  PI_DDR_DDR5
#define DDRI_6                  PI_DDR_DDR6
#define DDRI_7                  PI_DDR_DDR7
//++++++++++++++++++++++++  CRI1  ++++++++++++++++++++++++++++
#define CRI1                    PI_CR1
#define CRI1_0                  PI_CR1_C10
#define CRI1_1                  PI_CR1_C11
#define CRI1_2                  PI_CR1_C12
#define CRI1_3                  PI_CR1_C13
#define CRI1_4                  PI_CR1_C14
#define CRI1_5                  PI_CR1_C15
#define CRI1_6                  PI_CR1_C16
#define CRI1_7                  PI_CR1_C17
//++++++++++++++++++++++++  CRI2  ++++++++++++++++++++++++++++
#define CRI2                    PI_CR2
#define CRI2_0                  PI_CR2_C20 
#define CRI2_1                  PI_CR2_C21 
#define CRI2_2                  PI_CR2_C22 
#define CRI2_3                  PI_CR2_C23 
#define CRI2_4                  PI_CR2_C24 
#define CRI2_5                  PI_CR2_C25 
#define CRI2_6                  PI_CR2_C26 
#define CRI2_7                  PI_CR2_C27
#ifndef DDROUT
    #define DDROUT  1
#endif
#ifndef DDRIN
    #define DDRIN   0
#endif
#endif
/******************************KET THUC FILE******************************
______________________________NGUYEN QUY NHAT______________________________*/
