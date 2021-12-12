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

void Calendar::advance(){
    this->day++;
    if (this->day < 31){
        return;
    }

    if(this->day == 31 && this->mo < 12){
        this->mo++;
        this->day = 1;
    }

    if(this->mo == 12){
        this->mo = 1;
        this->day = 1;
        this->yr++;
    }
}