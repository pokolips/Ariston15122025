#pragma once
#include <Arduino.h>
#include <GyverNTC.h>

GyverNTC therm1(0, 10000, 3950);  // морозилка
GyverNTC therm2(1, 10000, 3950);  //  холодилка
GyverNTC therm3(2, 10000, 3950);  //  испарилка (испарение)
class WorksHol {

public:
    WorksHol(/* args */);
    // ~WorksHol();
    void setTemp(int thl, int tmr);//
    void setTemp(uint8_t tempOld);//
    void setTemp();//
    void setKn();//
    int getTempHol();//
    int getTempMor();//

    private:
    uint8_t _compr = 5;//
    uint8_t _kn = 6;//
    uint8_t fan = 7;//
    uint8_t _lamp = 8;//
    uint8_t _ledCompr = 9;//

    int _thol;//
    int _tmor;//
    int _tisp;//
    int _tholO;//
    int _tmorO;//

};

// WorksHol::WorksHol(/* args */)
// {
// }

// WorksHol::~WorksHol()
// {
// }
