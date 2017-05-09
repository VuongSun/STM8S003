/*****************************************************************************
  *Ten Tep          :     user_iwdg.h
  *Ngay             :     28/06/2014
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Dinh nghia cac ham cau IWDG trong STM8
  ******************************************************************************/

#include "user_iwdg.h"
#if (__USER_IWDG_H!=28062014)  
    #error "Include Sai #File user_iwdg.h"
#endif

/*******************************************************************************
Noi Dung    :   Cau hinh IWDG.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
*******************************************************************************/

void IWDG_Configuration(void)
{
    IWDG_Enable();    // Cho phep WatchDog hoat dong
    IWDG_ReloadCounter();    // Refresh WatchDog   
    IWDG_WriteAccessCmd(IWDG_WriteAccess_Enable);    // Cho phep ghi vao cac thanh ghi Prescaler
    IWDG_SetPrescaler(IWDG_Prescaler_256);    // Tan so = 128000/(2*IWDG_Prescaler);
    IWDG_SetReload(0xff);    // Xac dinh so Reload
}

/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/