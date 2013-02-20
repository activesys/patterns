"""
client.py
"""

from receiver import *
from command import *
from remotecontrol import *

def main():
    remote = RemoteControl()

    light = Light()
    door = Door()

    light_on_cmd = LightOnCommand(light)
    light_off_cmd = LightOffCommand(light)
    door_open_cmd = DoorOpenCommand(door)
    door_close_cmd = DoorCloseCommand(door)
    macro_cmd = MacroCommand()

    remote.set_commands(light_on_cmd, light_off_cmd)
    remote.set_commands(door_open_cmd, door_close_cmd)

    remote.execute_on_commands()
    print()
    remote.undo_on_commands()
    print()
    remote.execute_off_commands()
    print()
    remote.undo_off_commands()
    print()

    macro_cmd.add(light_on_cmd)
    macro_cmd.add(door_open_cmd)
    remote.set_macro_command(macro_cmd)
    print('macro command')
    remote.execute_macro_command()
    print()
    remote.undo_macro_command()

if __name__ == '__main__':
    main()

