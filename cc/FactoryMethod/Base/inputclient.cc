#include "input.h"
#include "inputfactory.h"

int main(int argc, char* argv[])
{
    InputFactory* factory = new FileInputFactory();
    Input* input = factory->create();
    input->read();
    delete input;
    delete factory;

    factory = new ConsoleInputFactory();
    input = factory->create();
    input->read();
    delete input;
    delete factory;

    factory = new NetInputFactory();
    input = factory->create();
    input->read();
    delete input;
    delete factory;

    return 0;
}

