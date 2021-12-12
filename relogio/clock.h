#ifndef RELOGIO_CLOCK_H
#define RELOGIO_CLOCK_H

class Clock
{

protected:
    int hr, min, sec, is_pm;

public:
    Clock(){};
    Clock(int h, int s, int m, int pm);
    void setClock(int h, int s, int m,
                  int pm);
    void readClock();
    int getPM();
};

#endif