#include "state.h"
#include "machine.h"

GumballMachine::GumballMachine(int number) : count(number)
{
    hasQuarterState = new HasQuarterState();
    noQuarterState = new NoQuarterState();
    soldState = new SoldState();
    soldOutState = new SoldOutState();

    state = count > 0 ? noQuarterState : soldOutState;
}

GumballMachine::~GumballMachine()
{
    delete hasQuarterState;
    delete noQuarterState;
    delete soldOutState;
    delete soldState;
}

void GumballMachine::insertQuarter()
{
    state->insertQuarter(this);
}

void GumballMachine::ejectQuarter()
{
    state->ejectQuarter(this);
}

void GumballMachine::turnCrank()
{
    state->turnCrank(this);
    state->dispense(this);
}

State* GumballMachine::getHasQuarterState()
{
    return hasQuarterState;
}

State* GumballMachine::getNoQuarterState()
{
    return noQuarterState;
}

State* GumballMachine::getSoldState()
{
    return soldState;
}

State* GumballMachine::getSoldOutState()
{
    return soldOutState;
}

void GumballMachine::setState(State* state)
{
    this->state = state;
}

void GumballMachine::releaseBall()
{
    std::cout << "A gumball comes rolling out the slot..." << std::endl;
    if (count > 0) {
        count--;
    }
}

int GumballMachine::getCount()
{
    return count;
}

