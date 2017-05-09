/*******************************************************************************
  *Ten Tep          :     ds3231.h
  *Ngay             :     2/3/2017
  *Tac Gia          :     MCA team
  *Cong Ty          :     MCA
  *Webside          :     mca.vn
  *Phien Ban        :     V1.0
  *Tom Tat          :     Giao tiep vs IC thoi gian thuc DS3231

******************************************************************************/
#ifndef _DS3231_H_
#define _DS3231_H_      232017

#include "main.h"
#include "i2c.h"


void ds3231_init(void);

void ds3231_write_1byte(uint8_t add, uint8_t dat1);
void ds3231_write_3bytes(uint8_t add, uint8_t dat1, uint8_t dat2, uint8_t dat3);
void ds3231_write_4bytes(uint8_t add, uint8_t dat1, uint8_t dat2, uint8_t dat3, uint8_t dat4);

uint8_t ds3231_read(uint8_t add);
/*__________________________CAI DAT THOI GIAN______________________________*/
void ds3231_set_hour(uint8_t hour);
void ds3231_set_min(uint8_t min);
void ds3231_set_sec(uint8_t sec);

void ds3231_set_dates(uint8_t date);
void ds3231_set_mon(uint8_t mon);
void ds3231_set_year(uint8_t year);

void ds3231_set_time(uint8_t hour, uint8_t min, uint8_t sec);
void ds3231_set_date(uint8_t day, uint8_t date, uint8_t mon, uint8_t years);
void stop_clock(void);
void start_clock(void);
/*____________________________DOC THOI GIAN________________________________*/
void ds3231_get_time(uint8_t *hour, uint8_t *min, uint8_t *sec);
void ds3231_get_date(uint8_t *date, uint8_t *mon, uint8_t *years);
uint8_t ds3231_get_day(void);
/*_____________________________DOC NHIET DO________________________________*/
uint8_t ds3231_get_temp(void);
/*_____________________________ALARM MODE__________________________________*/
void ds3231_set_alarm(uint8_t hour, uint8_t min, uint8_t sec);
/*____________________________HAM CHUYEN DOI_______________________________*/
uint8_t convert_3high_byte(uint8_t dat);
uint8_t convert_2high_byte(uint8_t dat);

#endif
/*------------------------------KET THUC FILE-----------------------------------
 _________________________________MCA Team_____________________________________*/