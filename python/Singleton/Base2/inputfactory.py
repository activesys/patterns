"""
inputfactory.py
"""

from input import *

class InputFactorySingletonError(Exception):
    pass

class InputFactory:
    class __Instance:
        def create(self, type):
            if type == "file":
                return FileInput()
            elif type == "console":
                return ConsoleInput()
            elif type == "net":
                return NetInput()
            else:
                return None

    __instance = None

    def __init__(self):
        raise InputFactorySingletonError()

    def instance():
        if not InputFactory.__instance:
            InputFactory.__instance = InputFactory.__Instance()
        return InputFactory.__instance

