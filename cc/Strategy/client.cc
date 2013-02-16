#include <iostream>

#include "flystrategy.h"
#include "quackstrategy.h"
#include "duck.h"

int main(int argc, char* argv[])
{
    Duck* mallard = new MallardDuck();
    mallard->performFly();
    mallard->performQuack();

    FlyStrategy* noway = new FlyNoWay();
    FlyStrategy* fs = new FlyWithWings();
    Duck* model = new ModelDuck();
    model->setFlyStrategy(noway);
    model->performFly();
    model->setFlyStrategy(fs);
    model->performFly();

    delete mallard;
    delete model;
    delete noway;
    delete fs;

    return 0;
}

