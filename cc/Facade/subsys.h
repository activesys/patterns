#ifndef __SUBSYS_H__
#define __SUBSYS_H__

#include <iostream>

class Tuner
{
public:
    void on()
    {
        std::cout << "Tuner on" << std::endl;
    }
    void off()
    {
        std::cout << "Tuner off" << std::endl;
    }
};

class Amplifier
{
public:
    void on()
    {
        std::cout << "Amplifier on" << std::endl;
    }
    void off()
    {
        std::cout << "Amplifier off" << std::endl;
    }
};

class Screen
{
public:
    void on()
    {
        std::cout << "Screen on" << std::endl;
    }
    void off()
    {
        std::cout << "Screen off" << std::endl;
    }
};

class PopcomPopper
{
public:
    void on()
    {
        std::cout << "PopcomPopper on" << std::endl;
    }
    void off()
    {
        std::cout << "PopcomPopper off" << std::endl;
    }
};

class TheaterLights
{
public:
    void on()
    {
        std::cout << "TheaterLights on" << std::endl;
    }
    void off()
    {
        std::cout << "TheaterLights off" << std::endl;
    }
};

class Dvdplayer
{
public:
    void on()
    {
        std::cout << "Dvdplayer on" << std::endl;
    }
    void off()
    {
        std::cout << "Dvdplayer off" << std::endl;
    }
};

class Cdplayer
{
public:
    void on()
    {
        std::cout << "Cdplayer on" << std::endl;
    }
    void off()
    {
        std::cout << "Cdplayer off" << std::endl;
    }
};

class Projector
{
public:
    void on()
    {
        std::cout << "Projector on" << std::endl;
    }
    void off()
    {
        std::cout << "Projector off" << std::endl;
    }
};

#endif // __SUBSYS_H__

