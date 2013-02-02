"""
inputfactory.py
"""

from input import *

class InputFactory:
    def create(self, type):
        if type == "file":
            return FileInput()
        elif type == "console":
            return ConsoleInput()
        elif type == "net":
            return NetInput()
        else:
            return None
