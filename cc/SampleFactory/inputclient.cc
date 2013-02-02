#include "input.h"
#include "inputfactory.h"

int main(int argc, char* argv[])
{
    InputFactory factory;

    Input* input = factory.create(FILE_INPUT);
    input->read();
    delete input;

    input = factory.create(CONSOLE_INPUT);
    input->read();
    delete input;

    input = factory.create(NET_INPUT);
    input->read();
    delete input;

    return 0;
}

