"""
iofactory.py
"""

from input import *
from output import *

class IOFactory:
    def create_input(self):
        pass
    def create_output(self):
        pass

class FileIOFactory(IOFactory):
    def create_input(self):
        return FileInput()
    def create_output(self):
        return FileOutput()

class ConsoleIOFactory(IOFactory):
    def create_input(self):
        return ConsoleInput()
    def create_output(self):
        return ConsoleOutput()

class NetIOFactory(IOFactory):
    def create_input(self):
        return NetInput()
    def create_output(self):
        return NetOutput()

