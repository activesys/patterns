#ifndef __MANAGER_H__
#define __MANAGER_H__

#include <iostream>
#include "input.h"

class Manager {
public:
    virtual Input* create_input() = 0;
};

class FileManager : public Manager {
public:
    virtual FileInput* create_input() {
        std::cout << "Manage file." << std::endl;
        return new FileInput();
    }
};

class ConsoleManager : public Manager {
public:
    virtual ConsoleInput* create_input() {
        std::cout << "Manage console." << std::endl;
        return new ConsoleInput();
    }
};

class NetManager : public Manager {
public:
    virtual NetInput* create_input() {
        std::cout << "Manage net." << std::endl;
        return new NetInput();
    }
};

#endif // __MANAGER_H__

