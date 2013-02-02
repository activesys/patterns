#ifndef __INPUT_H__
#define __INPUT_H__

#include <iostream>

class Input {
public:
    virtual void read() = 0;
};

class FileInput : public Input {
public:
    virtual void read() {
        std::cout << "Read contents from file." << std::endl;
    }
};

class ConsoleInput : public Input {
public:
    virtual void read() {
        std::cout << "Read contents from console." << std::endl;
    }
};

class NetInput : public Input {
public:
    virtual void read() {
        std::cout << "Read contents from net." << std::endl;
    }
};

#endif // __INPUT_H__

