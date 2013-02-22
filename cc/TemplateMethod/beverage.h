#ifndef __BEVERAGE_H__
#define __BEVERAGE_H__

#include <iostream>

class CaffeineBeverage
{
public:
    void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

public:
    virtual void boilWater()
    {
        std::cout << "Boiling water" << std::endl;
    }
    virtual void pourInCup()
    {
        std::cout << "Pouring into cup" << std::endl;
    }

public:
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
};

class Tea : public CaffeineBeverage
{
public:
    virtual void brew()
    {
        std::cout << "Steeping the tea" << std::endl;
    }
    virtual void addCondiments()
    {
        std::cout << "Adding Lemon" << std::endl;
    }
};

class Coffee : public CaffeineBeverage
{
public:
    virtual void brew()
    {
        std::cout << "Dripping Coffee through filter" << std::endl;
    }
    virtual void addCondiments()
    {
        std::cout << "Adding Sugar and Milk" << std::endl;
    }
};

#endif // __BEVERAGE_H__

