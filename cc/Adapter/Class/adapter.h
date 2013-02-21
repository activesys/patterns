#ifndef __ADAPTER_H__
#define __ADAPTER_H__

#include "duck.h"
#include "turkey.h"

class TurkeyAdapter : public Duck, private Turkey
{
public:
    virtual void quack()
    {
        gobble();
    }
    virtual void fly()
    {
        fly_short();
    }

public:
    virtual void fly_short()
    {
        std::cout << "Now I'm flying long distance" << std::endl;
    }
};

#endif // __ADAPTER_H__

