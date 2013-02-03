#include "input.h"
#include "inputfactory.h"

int main(int argc, char* argv[])
{
    Input* input = InputFactory::instance()->create(FILE_INPUT);
    input->read();
    delete input;

    input = InputFactory::instance()->create(CONSOLE_INPUT);
    input->read();
    delete input;

    input = InputFactory::instance()->create(NET_INPUT);
    input->read();
    delete input;

    return 0;
}

