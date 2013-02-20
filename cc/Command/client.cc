#include "remotecontrol.h"

int main(int argc, char* argv[])
{
    RemoteControl remote;

    Light light;
    Door door;

    LightOnCommand light_on_cmd(&light);
    LightOffCommand light_off_cmd(&light);
    DoorOpenCommand door_open_cmd(&door);
    DoorCloseCommand door_close_cmd(&door);
    MacroCommand macro_cmd;
    macro_cmd.add(&light_on_cmd);
    macro_cmd.add(&door_open_cmd);

    remote.setCommands(&light_on_cmd, &light_off_cmd);
    remote.setCommands(&door_open_cmd, &door_close_cmd);

    remote.executeOnCommands();
    std::cout << std::endl;
    remote.undoOnCommands();
    std::cout << std::endl;
    remote.executeOffCommands();
    std::cout << std::endl;
    remote.undoOffCommands();
    std::cout << std::endl;

    std::cout << "macro command:" << std::endl;
    remote.setMacroCommand(&macro_cmd);
    remote.executeMacroCommand();
    std::cout << std::endl;
    remote.undoMacroCommand();

    return 0;
}

