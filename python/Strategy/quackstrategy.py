"""
quackstretegy.py
"""

class QuackStrategy:
    def quack(self):
        pass

class Quack(QuackStrategy):
    def quack(self):
        print("Quack")

class MuteQuack(QuackStrategy):
    def quack(self):
        print("Silence")

class Squeak(QuackStrategy):
    def quack(self):
        print("Squeak")

