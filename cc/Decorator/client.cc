#include <iostream>

#include "beverage.h"
#include "decorator.h"

int main(int argc, char* argv[])
{
    Espresso espresso;
    std::cout << espresso.getDescription() << " $" << espresso.cost() << std::endl;

    DarkRoast darkroast;
    Mocha mocha1(&darkroast);
    Mocha mocha2(&mocha1);
    Whip whip(&mocha2);
    std::cout << whip.getDescription() << " $" << whip.cost() << std::endl;

    HouseBlend houseblend;
    Soy soy(&houseblend);
    Mocha mocha(&soy);
    Milk milk(&mocha);
    std::cout << milk.getDescription() << " $" << milk.cost() << std::endl;

    return 0;
}

