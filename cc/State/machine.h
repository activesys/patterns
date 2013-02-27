#ifndef __MACHINE_H__
#define __MACHINE_H__

#include "state.h"

class GumballMachine
{
public:
    GumballMachine(int number);
    ~GumballMachine();

public:
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();

public:

    State* getHasQuarterState();
    State* getNoQuarterState();
    State* getSoldState();
    State* getSoldOutState();
    void setState(State* state);
    void releaseBall();
    int getCount();

private:
    State* hasQuarterState;
    State* noQuarterState;
    State* soldState;
    State* soldOutState;

    State* state;
    int count;
};

#endif // __MACHINE_H__

