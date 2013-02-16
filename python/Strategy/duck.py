"""
duck.py
"""

from flystrategy import *
from quackstrategy import *

class Duck:
    def __init__(self, fs, qs):
        self.fs = fs
        self.qs = qs

    def performFly(self):
        self.fs.fly()
    def performQuack(self):
        self.qs.quack()

    def setFlyStrategy(self, fs):
        self.fs = fs
    def setQuackStrategy(self, qs):
        self.qs = qs

class MallardDuck(Duck):
    def __init__(self):
        self.fs = FlyWithWings()
        self.qs = Quack()

class ModelDuck(Duck):
    def __init__(self):
        self.fs = FlyNoWay()
        self.qs = MuteQuack()

