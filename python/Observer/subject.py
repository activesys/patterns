"""
subject.py
"""

from observer import *

class Subject:
    def __init__(self):
        self.observers = []

    def register(self, observer):
        self.observers.append(observer)
    def unregister(self, observer):
        self.observers.remove(observer)
    def notify(self):
        for observer in self.observers:
            observer.update(self)

