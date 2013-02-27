#include "state.h"
#include "machine.h"

void HasQuarterState::insertQuarter(GumballMachine* machine)
{
    std::cout << "You can't insert another quarter" << std::endl;
}
void HasQuarterState::ejectQuarter(GumballMachine* machine)
{
    std::cout << "Quarter returned" << std::endl;
    machine->setState(machine->getNoQuarterState());
}
void HasQuarterState::turnCrank(GumballMachine* machine)
{
    std::cout << "You turned..." << std::endl;
    machine->setState(machine->getSoldState());
}
void HasQuarterState::dispense(GumballMachine* machine)
{
    std::cout << "No gumball dispensed" << std::endl;
}

void SoldState::insertQuarter(GumballMachine* machine)
{
    std::cout << "Please wait, we're alread giving you a gumball" << std::endl;
}
void SoldState::ejectQuarter(GumballMachine* machine)
{
    std::cout << "Sorry, you alread turned the crank" << std::endl;
}
void SoldState::turnCrank(GumballMachine* machine)
{
    std::cout << "Turning twice doesn't get you another gumball!" << std::endl;
}
void SoldState::dispense(GumballMachine* machine)
{
    machine->releaseBall();
    if (machine->getCount() > 0) {
        machine->setState(machine->getNoQuarterState());
    } else {
        std::cout << "Oops, out of gumballs!" << std::endl;
        machine->setState(machine->getSoldOutState());
    }
}

void NoQuarterState::insertQuarter(GumballMachine* machine)
{
    std::cout << "You inserted a quarter" << std::endl;
    machine->setState(machine->getHasQuarterState());
}
void NoQuarterState::ejectQuarter(GumballMachine* machine)
{
    std::cout << "You haven't inserted a quarter" << std::endl;
}
void NoQuarterState::turnCrank(GumballMachine* machine)
{
    std::cout << "You turned, but there's no quarter" << std::endl;
}
void NoQuarterState::dispense(GumballMachine* machine)
{
    std::cout << "You need to pay first" << std::endl;
}

void SoldOutState::insertQuarter(GumballMachine* machine)
{
    std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
}
void SoldOutState::ejectQuarter(GumballMachine* machine)
{
    std::cout << "You can't eject, you haven't inserted a quarter yet" << std::endl;
}
void SoldOutState::turnCrank(GumballMachine* machine)
{
        std::cout << "You turned, but there are no gumballs" << std::endl;
}
void SoldOutState::dispense(GumballMachine* machine)
{
        std::cout << "No gumball dispensed" << std::endl;
}

