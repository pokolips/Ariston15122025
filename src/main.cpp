#include <Arduino.h>
#include <Wire.h>
#include <OneWire.h>
#include <U8glib.h>
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
  work.setTemp();
  
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
}
int myFunction(){

  while (kn == true){
    tmor = 8;
  }
}