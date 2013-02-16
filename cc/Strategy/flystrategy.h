#ifndef __FLY_STRATEGY_H__
#define __FLY_STRATEGY_H__

#include <iostream>

class FlyStrategy
{
public:
    virtual void fly() = 0;
};

class FlyWithWings : public FlyStrategy
{
public:
    virtual void fly()
    {
        std::cout << "I'm flying!!" << std::endl;
    }
};

class FlyNoWay : public FlyStrategy
{
public:
    virtual void fly()
    {
        std::cout << "I can't fly!!" << std::endl;
    }
};

#endif // __FLY_STRATEGY_H__

