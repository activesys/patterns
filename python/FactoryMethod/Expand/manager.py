"""
inputfactory.py
"""

from input import *

class Manager:
    def create_input(self):
        pass

class FileManager(Manager):
    def create_input(self):
        print("Manage file.")
        return FileInput()

class ConsoleManager(Manager):
    def create_input(self):
        print("Manage console.")
        return ConsoleInput()

class NetManager(Manager):
    def create_input(self):
        print("Manage net.");
        return NetInput()

