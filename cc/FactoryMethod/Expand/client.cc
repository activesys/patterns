#include "input.h"
#include "manager.h"
#include "managerfactory.h"

int main(int argc, char* argv[])
{
    ManagerFactory factory;
    Manager* manager = factory.create(FILE_MANAGER);
    Input* input = manager->create_input();
    input->read();
    delete input;
    delete manager;

    manager = factory.create(CONSOLE_MANAGER);
    input = manager->create_input();
    input->read();
    delete input;
    delete manager;

    manager = factory.create(NET_MANAGER);
    input = manager->create_input();
    input->read();
    delete input;
    delete manager;

    return 0;
}

