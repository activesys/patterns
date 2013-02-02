#ifndef __IOFACTORY_H__
#define __IOFACTORY_H__

#include "input.h"
#include "output.h"

class IOFactory {
public:
    virtual Input* create_input() = 0;
    virtual Output* create_output() = 0;
};

class FileIOFactory : public IOFactory {
public:
    virtual FileInput* create_input() {
        return new FileInput();
    }
    virtual FileOutput* create_output() {
        return new FileOutput();
    }
};

class ConsoleIOFactory : public IOFactory {
    virtual ConsoleInput* create_input() {
        return new ConsoleInput();
    }
    virtual ConsoleOutput* create_output() {
        return new ConsoleOutput();
    }
};

class NetIOFactory : public IOFactory {
    virtual NetInput* create_input() {
        return new NetInput();
    }
    virtual NetOutput* create_output() {
        return new NetOutput();
    }
};

#endif // __IOFACTORY_H__

