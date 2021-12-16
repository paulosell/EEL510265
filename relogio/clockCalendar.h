#ifndef RELOGIO_CLOCKCALENDAR_H
#define RELOGIO_CLOCKCALENDAR_H

#include "clock.h"
#include "calendar.h"
#include <iostream>

using namespace std;

class ClockCalendar : public Clock, public Calendar
{
public:
    ClockCalendar(){};
    ClockCalendar(int mt, int d, int y, int h, int m, int s, int pm);

    void read();

private:
    string time;
};

#endif