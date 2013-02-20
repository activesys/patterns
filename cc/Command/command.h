#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <list>

#include "receiver.h"

class Command
{
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};

class LightOnCommand : public Command
{
public:
    LightOnCommand(Light* light)
    {
        this->light = light;
    }

public:
    virtual void execute()
    {
        light->on();
    }
    virtual void undo()
    {
        light->off();
    }

private:
    Light* light;
};

class LightOffCommand : public Command
{
public:
    LightOffCommand(Light* light)
    {
        this->light = light;
    }

public:
    virtual void execute()
    {
        light->off();
    }
    virtual void undo()
    {
        light->on();
    }

private:
    Light* light;
};


class DoorOpenCommand : public Command
{
public:
    DoorOpenCommand(Door* door)
    {
        this->door = door;
    }

public:
    virtual void execute()
    {
        door->open();
    }
    virtual void undo()
    {
        door->close();
    }

private:
    Door* door;
};

class DoorCloseCommand : public Command
{
public:
    DoorCloseCommand(Door* door)
    {
        this->door = door;
    }

public:
    virtual void execute()
    {
        door->close();
    }
    virtual void undo()
    {
        door->open();
    }

private:
    Door* door;
};


class MacroCommand : public Command
{
public:
    virtual void execute()
    {
        for (std::list<Command*>::iterator it = commands.begin(); it != commands.end(); ++it) {
            (*it)->execute();
        }
    }
    virtual void undo()
    {
        for (std::list<Command*>::iterator it = commands.begin(); it != commands.end(); ++it) {
            (*it)->undo();
        }
    }

public:
    void add(Command* command)
    {
        commands.push_back(command);
    }
    void remove(Command* command)
    {
        commands.remove(command);
    }

private:
    std::list<Command*> commands;
};

#endif // __COMMAND_H__

