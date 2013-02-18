#ifndef __DECORATOR_H___
#define __DECORATOR_H___

#include "beverage.h"

class Decorator : public Beverage
{
public:
    virtual std::string getDescription() = 0;
};

class Milk : public Decorator
{
public:
    Milk(Beverage* beverage)
    {
        this->beverage = beverage;
    }

public:
    virtual std::string getDescription()
    {
        return beverage->getDescription() + ", Milk";
    }
    virtual float cost()
    {
        return beverage->cost() + 0.10;
    }

private:
    Beverage* beverage;
};

class Mocha : public Decorator
{
public:
    Mocha(Beverage* beverage)
    {
        this->beverage = beverage;
    }

public:
    virtual std::string getDescription()
    {
        return beverage->getDescription() + ", Mocha";
    }
    virtual float cost()
    {
        return beverage->cost() + 0.20;
    }

private:
    Beverage* beverage;
};

class Soy : public Decorator
{
public:
    Soy(Beverage* beverage)
    {
        this->beverage = beverage;
    }

public:
    virtual std::string getDescription()
    {
        return beverage->getDescription() + ", Soy";
    }
    virtual float cost()
    {
        return beverage->cost() + 0.15;
    }

private:
    Beverage* beverage;
};

class Whip : public Decorator
{
public:
    Whip(Beverage* beverage)
    {
        this->beverage = beverage;
    }

public:
    virtual std::string getDescription()
    {
        return beverage->getDescription() + ", Whip";
    }
    virtual float cost()
    {
        return beverage->cost() + 0.10;
    }

private:
    Beverage* beverage;
};

#endif // __DECORATOR_H___

