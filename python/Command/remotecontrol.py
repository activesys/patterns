"""
remotecontrol.py
"""

class RemoteControl:
    def __init__(self):
        self.on_commands = []
        self.off_commands = []
        self.macro_command = None
    def set_commands(self, on_command, off_command):
        self.on_commands.append(on_command)
        self.off_commands.append(off_command)
    def execute_on_commands(self):
        for command in self.on_commands:
            command.execute()
    def execute_off_commands(self):
        for command in self.off_commands:
            command.execute()
    def undo_on_commands(self):
        for command in self.on_commands:
            command.undo()
    def undo_off_commands(self):
        for command in self.off_commands:
            command.undo()
    def set_macro_command(self, macro_command):
        self.macro_command = macro_command
    def execute_macro_command(self):
        self.macro_command.execute()
    def undo_macro_command(self):
        self.macro_command.undo()

