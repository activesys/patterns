#ifndef __RECEIVER_H__
#define __RECEIVER_H__

#include <iostream>

class Light
{
public:
    void on()
    {
        std::cout << "Light on." << std::endl;
    }
    void off()
    {
        std::cout << "Light off." << std::endl;
    }
};

class Door
{
public:
    void open()
    {
        std::cout << "Door open." << std::endl;
    }
    void close()
    {
        std::cout << "Door close." << std::endl;
    }
};

#endif // __RECEIVER_H__

