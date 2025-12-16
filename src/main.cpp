#include <Arduino.h>
#include <Wire.h>
#include <OneWire.h>
#include <U8glib.h>
#include"Dannye.h"


// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  for (uint8_t i = firstLed; i <= lastLed; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
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