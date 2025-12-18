#include <Arduino.h>
#include <Wire.h>
#include <OneWire.h>
#include <U8glib.h>
#include <LowPower.h>          // библиотека сна
#include"Dannye.h"
#include "WorksHol.h"


// put function declarations here:
int myFunction();

WorksHol work;

void setup() {
  // put your setup code here, to run once:

  for (uint8_t i = firstLed; i <= lastLed; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  work.setTemp();// Запрос на проверку температуры

  //Цикл установки клапана
    while (kn == true){
    tmor = 8;
  }
  //  myFunction();
}

void loop() {

  unsigned long currentMillis = millis();

  // -------------------------------------
  if (millis() - tempTimer >= pauseTemp) {
    tempTimer = millis();  // сбросить таймер
    // getTempAdd();  // Функция проверки температуры
    //isComprOn = cycl.goCompr(thol, tmor);// временно убрал для проверки
    // kn = sklad.getKn();
    delay(5);
  }
  // -------------------------------------

  // ----------проверка состояния клапана---------------------------
  if (millis() - klapanTimer >= 300000) {
    klapanTimer = millis();  // сбросить таймер

  }

  // 
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);      // спать 8 сек. mode POWER_OFF, АЦП выкл
  sleep_count++;            // +1 к счетчику просыпаний
  if (sleep_count >= 3) {  // если время сна превысило 10 минут (75 раз по 8 секунд - подгон = 70)
   // wake_flag = 1;          // рарешить выполнение расчета
    sleep_count = 0;        // обнулить счетчик
    delay(2);               // задержка для стабильности
  }

}

//Функция пока не подключена
int myFunction(){

  while (kn == true){
    tmor = 8;
  }
  return tmor;
}                    