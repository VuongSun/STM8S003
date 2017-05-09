#include "main.h"

extern FRAME_LED7 BufferDisplay;
// Anode chung
static uint8_t chu_so[10]= {0x81,0xf3,0x49,0x61,0x33,0x25,0x05,0xf1,0x01,0x21};          
//static uint8_t chu_so[10]= {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};	
//Ma Hien Thi                0    1    2    3    4    5    6    7    8    9
static FRAME_LED7 BufferTemp;

/*
void Update_Date(uint8_t date)
{
	 BufferTemp.data[0]  = chu_so[date/10];
	 BufferTemp.data[1]  = chu_so[date%10]; 
	 BufferDisplay       = BufferTemp;  			
}
void Update_Month(uint8_t month)
{
	 BufferTemp.data[2]  = chu_so[month/10];
	 BufferTemp.data[3]  = chu_so[month%10]; 
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Year(uint8_t year)
{
	 BufferTemp.data[4]  = chu_so[year/10];
	 BufferTemp.data[5]  = chu_so[year%10]; 
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Day(uint8_t day)
{
	 BufferTemp.data[6]  = chu_so[day/10];
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Hour(uint8_t hour)
{
	 BufferTemp.data[7]  = chu_so[hour/10];
	 BufferTemp.data[8]  = chu_so[hour%10]; 
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Minute(uint8_t minute)
{
	 BufferTemp.data[9]  = chu_so[minute/10];
	 BufferTemp.data[10] = chu_so[minute%10]; 
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Temp(uint8_t temp)
{
	 BufferTemp.data[11]  = chu_so[temp/10];
	 BufferTemp.data[12]  = chu_so[temp%10]; 
	 BufferDisplay       	= BufferTemp; 	 
}
void Update_DateL(uint8_t date_l)
{
	 BufferTemp.data[13]  = chu_so[date_l/10];
	 BufferTemp.data[14]  = chu_so[date_l%10]; 
	 BufferDisplay       	= BufferTemp; 	 
}
void Update_MonthL(uint8_t month_l)
{
	 BufferTemp.data[15]  = chu_so[month_l/10];
	 BufferTemp.data[16]  = chu_so[month_l%10]; 
	 BufferDisplay      	= BufferTemp; 	 
}
*/
void Update_Date(uint8_t date)
{
	 BufferTemp.data[0]  = chu_so[date/10];
	 BufferTemp.data[1]  = chu_so[date%10]; 
	 BufferDisplay       = BufferTemp;  			
}
void Update_Month(uint8_t month)
{
	 BufferTemp.data[2]  = chu_so[month/10];
	 BufferTemp.data[3]  = chu_so[month%10]; 
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Year(uint8_t year)
{
	 BufferTemp.data[4]  = chu_so[year/10];
	 BufferTemp.data[5]  = chu_so[year%10]; 
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Day(uint8_t day)
{
	 BufferTemp.data[6]  = chu_so[day%10];
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Temp(uint8_t temp)
{
	 BufferTemp.data[7]  = chu_so[temp/10];
	 BufferTemp.data[8]  = chu_so[temp%10]; 
	 BufferDisplay       	= BufferTemp; 	 
}
void Update_DateL(uint8_t date_l)
{
	 BufferTemp.data[9]  = chu_so[date_l/10];
	 BufferTemp.data[10]  = chu_so[date_l%10]; 
	 BufferDisplay       	= BufferTemp; 	 
}
void Update_MonthL(uint8_t month_l)
{
	 BufferTemp.data[11]  = chu_so[month_l/10];
	 BufferTemp.data[12]  = chu_so[month_l%10]; 
	 BufferDisplay      	= BufferTemp; 	 
}
void Update_Hour(uint8_t hour)
{
	 BufferTemp.data[13]  = chu_so[hour/10];
	 BufferTemp.data[14]  = chu_so[hour%10]; 
	 BufferDisplay       = BufferTemp; 	 
}
void Update_Minute(uint8_t minute)
{
	 BufferTemp.data[15]  = chu_so[minute/10];
	 BufferTemp.data[16] = chu_so[minute%10]; 
	 BufferDisplay       = BufferTemp; 	 
}