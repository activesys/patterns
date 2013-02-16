"""
flystrategy.py
"""

class FlyStrategy:
    def fly(self):
        pass

class FlyWithWings(FlyStrategy):
    def fly(self):
        print("I'm flying!!")

class FlyNoWay(FlyStrategy):
    def fly(self):
        print("I can't fly!!")

