"""
inputfactory.py
"""

from input import *

class InputFactory:
    def create(self):
        pass

class FileInputFactory(InputFactory):
    def create(self):
        return FileInput()

class ConsoleInputFactory(InputFactory):
    def create(self):
        return ConsoleInput()

class NetInputFactory(InputFactory):
    def create(self):
        return NetInput()

