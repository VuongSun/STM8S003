/*****************************************************************************
  *Ten Tep          :     user_iwdg.h
  *Ngay             :     28/06/2014
  *Tac Gia          :     MinhHa R&D Team
  *Cong Ty          :     MinhHaGroup
  *Webside          :     mcu.banlinhkien.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Khai bao cac ham cau IWDG trong STM8
  ******************************************************************************/

#include "user_eeprom.h"
#if (__USER_EEPROM_H!=28062014)  
    #error "Include Sai #File user_eeprom.h"
#endif

/*******************************************************************************
Noi Dung    :   Cau hinh EEPROM.
Tham Bien   :   Khong.
Tra Ve      :   Khong.
*******************************************************************************/

void EEPROM_Configuration(void)
{
    FLASH_Unlock(FLASH_MEMTYPE_DATA);	
}

/*------------------------------KET THUC FILE-------------------------------
 ______________________________MinhHa R&D Temp______________________________*/