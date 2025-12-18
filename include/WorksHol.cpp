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
void WorksHol::setTemp(uint8_t tempOld){
  WorksHol::setTemp();
       _tholO = _thol;//
       _tmorO = _tmor;//
}
void WorksHol::setTemp(int thl, int tmr){
  int _thl;
  int _tmr;
thl = _thl;
tmr = _tmr;

}
int WorksHol::getTempHol(){
return _thol;
}
int WorksHol::getTempMor(){
return _tmor;
}