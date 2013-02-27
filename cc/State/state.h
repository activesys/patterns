#ifndef __STATE_H__
#define __STATE_H__

#include <iostream>

class GumballMachine;

class State
{
public:
    virtual void insertQuarter(GumballMachine* machine) = 0;
    virtual void ejectQuarter(GumballMachine* machine) = 0;
    virtual void turnCrank(GumballMachine* machine) = 0;
    virtual void dispense(GumballMachine* machine) = 0;
};

class HasQuarterState : public State
{
public:
    virtual void insertQuarter(GumballMachine* machine);
    virtual void ejectQuarter(GumballMachine* machine);
    virtual void turnCrank(GumballMachine* machine);
    virtual void dispense(GumballMachine* machine);
};

class SoldState : public State
{
public:
    virtual void insertQuarter(GumballMachine* machine);
    virtual void ejectQuarter(GumballMachine* machine);
    virtual void turnCrank(GumballMachine* machine);
    virtual void dispense(GumballMachine* machine);
};

class NoQuarterState : public State
{
public:
    virtual void insertQuarter(GumballMachine* machine);
    virtual void ejectQuarter(GumballMachine* machine);
    virtual void turnCrank(GumballMachine* machine);
    virtual void dispense(GumballMachine* machine);
};

class SoldOutState : public State
{
public:
    virtual void insertQuarter(GumballMachine* machine);
    virtual void ejectQuarter(GumballMachine* machine);
    virtual void turnCrank(GumballMachine* machine);
    virtual void dispense(GumballMachine* machine);
};

#endif // __STATE_H__

