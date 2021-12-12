#include "clock.h"
#include <iostream>

using namespace std;

Clock::Clock(int h, int s, int m, int pm){
    this->hr = h;
    this->min = m;
    this->sec=s;
    this->is_pm = pm;
}

void Clock::setClock(int h, int s, int m,int pm){
    
    this->hr = h;
    this->min = m;
    this->sec=s;
    this->is_pm = pm;
    
}

void Clock::readClock(){
    cout << this->hr << ":"<<this->min << ":" << this->sec;
}

int Clock::getPM(){
    return this->is_pm;
}
