"""
input.py
"""

class Input:
    def read(self):
        pass

class FileInput(Input):
    def read(self):
        print("Read contents from file.")

class ConsoleInput(Input):
    def read(self):
        print("Read contents from console.")

class NetInput(Input):
    def read(self):
        print("Read contents from net.")

