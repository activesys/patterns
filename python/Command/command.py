"""
command.py
"""

from receiver import *

class Command:
    def execute(self):
        pass
    def undo(self):
        pass

class LightOnCommand(Command):
    def __init__(self, light):
        self.light = light
    def execute(self):
        self.light.on()
    def undo(self):
        self.light.off()

class LightOffCommand(Command):
    def __init__(self, light):
        self.light = light
    def execute(self):
        self.light.off()
    def undo(self):
        self.light.on()

class DoorOpenCommand(Command):
    def __init__(self, door):
        self.door = door
    def execute(self):
        self.door.open()
    def undo(self):
        self.door.close()

class DoorCloseCommand(Command):
    def __init__(self, door):
        self.door = door
    def execute(self):
        self.door.close()
    def undo(self):
        self.door.open()

class MacroCommand(Command):
    def __init__(self):
        self.commands = []
    def add(self, command):
        self.commands.append(command)
    def remove(self, command):
        self.commands.remove(command)
    def execute(self):
        for command in self.commands:
            command.execute()
    def undo(self):
        for command in self.commands:
            command.undo()

