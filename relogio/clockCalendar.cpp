#include "clockCalendar.h"
#include <iostream>

using namespace std;

ClockCalendar::ClockCalendar(int mt, int d, int y, int h, int m, int s, int pm): Clock (h, s, m, pm), Calendar (mt, d, y){
    this->time = time;

}

void ClockCalendar::read(){
    cout << this->hr << ":" << this->min << ":" << this->sec << "  "
            << this->day << "/" << this->mo << "/" << this->yr+1900;
}
