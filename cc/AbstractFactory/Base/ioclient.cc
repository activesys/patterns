#include "input.h"
#include "output.h"
#include "iofactory.h"

int main(int argc, char* argv[]) {
    IOFactory* factory = new FileIOFactory();
    Input* input = factory->create_input();
    Output* output = factory->create_output();
    input->read();
    output->write();
    delete factory;
    delete input;
    delete output;

    factory = new ConsoleIOFactory();
    input = factory->create_input();
    output = factory->create_output();
    input->read();
    output->write();
    delete factory;
    delete input;
    delete output;

    factory = new NetIOFactory();
    input = factory->create_input();
    output = factory->create_output();
    input->read();
    output->write();
    delete factory;
    delete input;
    delete output;

    return 0;
}

