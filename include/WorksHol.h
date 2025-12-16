#pragma once
#include <Arduino.h>

class WorksHol
{

public:
    WorksHol(/* args */);
    // ~WorksHol();
    void setTemp();
    void setKn();
    private:
    uint8_t _compr = 5;
    uint8_t _kn = 6;
    uint8_t fan = 7;
    uint8_t _lamp = 8;
    uint8_t _ledCompr = 9;
};

// WorksHol::WorksHol(/* args */)
// {
// }

// WorksHol::~WorksHol()
// {
// }
