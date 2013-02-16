#ifndef __QUACK_STRATEGY_H__
#define __QUACK_STRATEGY_H__

#include <iostream>

class QuackStrategy
{
public:
    virtual void quack() = 0;
};

class Quack : public QuackStrategy
{
public:
    virtual void quack()
    {
        std::cout << "Quack!!" << std::endl;
    }
};

class MuteQuack : public QuackStrategy
{
public:
    virtual void quack()
    {
        std::cout << "Silence!!" << std::endl;
    }
};

class Squeak : public QuackStrategy
{
public:
    virtual void quack()
    {
        std::cout << "Squeak!!" << std::endl;
    }
};

#endif // __QUACK_STRATEGY_H__

