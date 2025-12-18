#include <Arduino.h>
#include <Wire.h>
#include <OneWire.h>
#include <U8glib.h>
#include <LowPower.h>          // библиотека сна
#include"Dannye.h"
#include "WorksHol.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);  // I2C / TWI
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

//
void u8g_prepare(void) {
  u8g.setFont(u8g_font_6x10);
  u8g.setFontRefHeightExtendedText();
  u8g.setDefaultForegroundColor();
  u8g.setFontPosTop();
}

//
void text_Prob() {
  u8g_prepare();
  u8g.setPrintPos(0, 0);
  u8g.print(" ");
  //u8g.setPrintPos(7, 0);
  u8g.print(thol);
  u8g.setPrintPos(44,0);
  u8g.print(" ");
  //u8g.setPrintPos(40,0);
  u8g.print(tmor);
   u8g.setPrintPos(88, 0);
//   u8g.print(" ");
//  // u8g.setPrintPos(74, 0);
//   u8g.print(tisp);
  u8g.setPrintPos(0, 18);
  u8g.print ("Work : ");
  //u8g.setPrintPos(56, 18);
//   u8g.print(s2);
//   u8g.setPrintPos(64, 18);
//   u8g.print ("Klap : ");
//   u8g.print (kl); //(knopOsv);
//   u8g.setPrintPos(0, 36);
//   u8g.print("kompr : ");
//   u8g.setPrintPos(48, 36);
//  // myString s;
//   u8g.print(s);
//   u8g.setPrintPos(0, 54);
//    u8g.print("fan  : ");
//     u8g.print(s1);
//     u8g.setPrintPos(60, 54);
//    u8g.print("prov: ");
//     u8g.print(provH);
    //----------------------------
  //u8g.setScale();   ???????????????
 // u8g.drawStr(40, 40, tex);
  // u8g.undoScale();
}