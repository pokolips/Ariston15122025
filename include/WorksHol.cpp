#include "WorksHol.h"

WorksHol::WorksHol(/* args */)
{
}
void WorksHol::setTemp(){
    therm1.getTempAverage();
    therm2.getTempAverage();
    therm3.getTempAverage();
  _tmor = therm1.getTempAverage();
  _thol = therm2.getTempAverage();
  _tisp = therm3.getTempAverage();
}
int WorksHol::getTempHol(){
return _thol;
}
int WorksHol::getTempMor(){
return _tmor;
}