#ifndef RELOGIO_CALENDAR_H
#define RELOGIO_CALENDAR_H

class Calendar
{
protected:
    int mo, day, yr;

public:
    Calendar(){};
    Calendar(int m, int d, int y);
    void setCalendar(int m, int d,
                     int y);
    void readCalendar();
    void advance();
};

#endif