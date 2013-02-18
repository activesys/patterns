#ifndef __BEVERAGE_H__
#define __BEVERAGE_H__

#include <string>

class Beverage
{
public:
    virtual std::string getDescription()
    {
        return description;
    }
    virtual float cost() = 0;
protected:
    std::string description;
};

class HouseBlend : public Beverage
{
public:
    HouseBlend()
    {
        description = "House Blend Coffee";
    }

public:
    virtual float cost()
    {
        return 0.89;
    }
};

class DarkRoast : public Beverage
{
public:
    DarkRoast()
    {
        description = "Dark Roast Coffee";
    }

public:
    virtual float cost()
    {
        return 0.99;
    }
};

class Decaf : public Beverage
{
public:
    Decaf()
    {
        description = "Decaf Coffee";
    }

public:
    virtual float cost()
    {
        return 1.05;
    }
};

class Espresso : public Beverage
{
public:
    Espresso()
    {
        description = "Espresso Coffee";
    }

public:
    virtual float cost()
    {
        return 1.99;
    }
};

#endif // __BEVERAGE_H__

