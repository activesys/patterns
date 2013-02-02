#ifndef __INPUT_FACTORY_H__
#define __INPUT_FACTORY_H__

#include "input.h"

class InputFactory {
public:
    virtual Input* create() = 0;
};

class FileInputFactory : public InputFactory {
public:
    virtual FileInput* create() {
       return new FileInput();
    }
};

class ConsoleInputFactory : public InputFactory {
public:
    virtual ConsoleInput* create() {
        return new ConsoleInput();
    }
};

class NetInputFactory : public InputFactory {
public:
    virtual NetInput* create() {
        return new NetInput();
    }
};

#endif // __INPUT_FACTORY_H__

