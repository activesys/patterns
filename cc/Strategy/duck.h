#ifndef __DUCK_H__
#define __DUCK_H__

#include <iostream>

#include "flystrategy.h"
#include "quackstrategy.h"

class Duck
{
public:
    Duck(FlyStrategy* fs = NULL, QuackStrategy* qs = NULL) :
        flyStrategy(fs), quackStrategy(qs)
    {
    }

public:
    void performFly()
    {
        flyStrategy->fly();
    }
    void performQuack()
    {
        quackStrategy->quack();
    }

    void setFlyStrategy(FlyStrategy* fs)
    {
        flyStrategy = fs;
    }
    void setQuackStrategy(QuackStrategy* qs)
    {
        quackStrategy = qs;
    }

protected:
    FlyStrategy* flyStrategy;
    QuackStrategy* quackStrategy;
};

class MallardDuck : public Duck
{
public:
    MallardDuck()
    {
        flyStrategy = new FlyWithWings();
        quackStrategy = new Quack();
    }
    ~MallardDuck()
    {
        delete flyStrategy;
        delete quackStrategy;
    }
};

class ModelDuck : public Duck
{
};

#endif // __DUCK_H__

