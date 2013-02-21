#ifndef __DUCK_H__
#define __DUCK_H__

#include <iostream>

class Duck
{
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
};

class MallardDuck : public Duck
{
public:
    virtual void quack()
    {
        std::cout << "Quack" << std::endl;
    }
    virtual void fly()
    {
        std::cout << "I'm flying" << std::endl;
    }
};

#endif // __DUCK_H__

