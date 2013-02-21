#ifndef __ADAPTER_H__
#define __ADAPTER_H__

#include "duck.h"
#include "turkey.h"

class TurkeyAdapter : public Duck
{
public:
    TurkeyAdapter(Turkey* turkey)
    {
        this->turkey = turkey;
    }

public:
    virtual void quack()
    {
        turkey->gobble();
    }
    virtual void fly()
    {
        for (int i = 0; i < 5; ++i) {
            turkey->fly();
        }
    }

private:
    Turkey* turkey;
};

#endif // __ADAPTER_H__

