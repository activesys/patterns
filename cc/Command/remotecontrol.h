#ifndef __REMOTECONTROL_H__
#define __REMOTECONTROL_H__

#include "command.h"

class RemoteControl
{
public:
    void setCommands(Command* on_command, Command* off_command)
    {
        on_commands.push_back(on_command);
        off_commands.push_back(off_command);
    }
    void executeOnCommands()
    {
        for (std::list<Command*>::iterator it = on_commands.begin(); it != on_commands.end(); ++it) {
            (*it)->execute();
        }
    }
    void executeOffCommands()
    {
        for (std::list<Command*>::iterator it = off_commands.begin(); it != off_commands.end(); ++it) {
            (*it)->execute();
        }
    }
    void undoOnCommands()
    {
        for (std::list<Command*>::iterator it = on_commands.begin(); it != on_commands.end(); ++it) {
            (*it)->undo();
        }
    }
    void undoOffCommands()
    {
        for (std::list<Command*>::iterator it = off_commands.begin(); it != off_commands.end(); ++it) {
            (*it)->undo();
        }
    }

    void setMacroCommand(Command* macro_command)
    {
        this->macro_command = macro_command;
    }
    void executeMacroCommand()
    {
        macro_command->execute();
    }
    void undoMacroCommand()
    {
        macro_command->undo();
    }

private:
    std::list<Command*> on_commands;
    std::list<Command*> off_commands;
    Command* macro_command;
};

#endif // __REMOTECONTROL_H__

