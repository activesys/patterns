#ifndef __TURKEY_H__
#define __TURKEY_H__

#include <iostream>

class Turkey
{
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

class WildTurkey : public Turkey
{
public:
    virtual void gobble()
    {
        std::cout << "Gobble gobble" << std::endl;
    }
    virtual void fly()
    {
        std::cout << "I'm flying a short distance" << std::endl;
    }
};

#endif // __TURKEY_H__

