"""
output.py
"""

class Output:
    def write(self):
        pass

class FileOutput(Output):
    def write(self):
        print("Write contents to file.")

class ConsoleOutput(Output):
    def write(self):
        print("Write contents to console.")

class NetOutput(Output):
    def write(self):
        print("Write contents to net.")

