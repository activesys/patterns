#ifndef __INPUT_FACTORY_H__
#define __INPUT_FACTORY_H__

#include "input.h"

typedef enum {FILE_INPUT, CONSOLE_INPUT, NET_INPUT} input_type;

class InputFactory {
public:
    Input* create(input_type type) {
        switch (type) {
            case FILE_INPUT:
                return new FileInput();
                break;

            case CONSOLE_INPUT:
                return new ConsoleInput();
                break;

            case NET_INPUT:
                return new NetInput();
                break;

            default:
                return NULL;
                break;
        }
    }

public:
    static InputFactory* instance() {
        if (inst == NULL) {
            inst = new InputFactory();
        }

        return inst;
    }

protected:
    InputFactory() {}

private:
    static InputFactory* inst;
};

InputFactory* InputFactory::inst = NULL;

#endif // __INPUT_FACTORY_H__

