"""
inputfactory.py
"""

from input import *

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
        if not InputFactory.__instance:
            InputFactory.__instance = InputFactory.__Instance()

    def __getattr__(self, attr):
        return getattr(InputFactory.__instance, attr)
    def __setattr__(self, attr, value):
        return setattr(InputFactory.__instance, attr, value)

