#include "state.h"
#include "machine.h"

int main(int argc, char* argv[])
{
    GumballMachine machine(5);

    machine.insertQuarter();
    machine.turnCrank();

    std::cout << std::endl;

    machine.insertQuarter();
    machine.ejectQuarter();
    machine.turnCrank();

    std::cout << std::endl;

    machine.insertQuarter();
    machine.turnCrank();
    machine.insertQuarter();
    machine.turnCrank();
    machine.ejectQuarter();

    std::cout << std::endl;

    machine.insertQuarter();
    machine.insertQuarter();
    machine.turnCrank();
    machine.insertQuarter();
    machine.turnCrank();
    machine.insertQuarter();
    machine.turnCrank();

    return 0;
}

