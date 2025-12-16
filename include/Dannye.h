#pragma once
#include <Arduino.h>

#define firstLed 5
#define lastLed 13

int thol = 18;//
int tmor = -1;//
bool kn;//
uint32_t tempTimer, klapanTimer, FenTimer;
uint32_t pauseTemp = 60000; //проверка температуры 
// uint8_t pinsAll[] = {4, 5, 6, 7, 8, 9, 13};