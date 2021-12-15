#include "calendar.h"
#include <iostream>

using namespace std;

Calendar::Calendar(int m, int d, int y){
    this->mo = m;
    this->day = d;
    this->yr = y;
}

void Calendar::readCalendar(){
    cout<< this->day << "/" << this->mo << "/" << this->yr;
}

