#ifndef __OUTPUT_H__
#define __OUTPUT_H__

#include <iostream>

class Output {
public:
    virtual void write() = 0;
};

class FileOutput : public Output {
public:
    virtual void write() {
        std::cout << "Write contents to file." << std::endl;
    }
};

class ConsoleOutput : public Output {
public:
    virtual void write() {
        std::cout << "Write contents to console." << std::endl;
    }
};

class NetOutput : public Output {
public:
    virtual void write() {
        std::cout << "Wrtie contents to net." << std::endl;
    }
};

#endif // __OUTPUT_H__

