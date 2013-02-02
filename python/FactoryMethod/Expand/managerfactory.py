"""
managerfactory.py
"""

from manager import *

class ManagerFactory:
    def create(self, type):
        if type == "file":
            return FileManager()
        elif type == "console":
            return ConsoleManager()
        elif type == "net":
            return NetManager()
        else:
            return None

