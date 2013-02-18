"""
decorator.py
"""

from beverage import *

class Decorator(Beverage):
    def get_description(self):
        pass
    def cost(self):
        pass

class Milk(Decorator):
    def __init__(self, beverage):
        self.beverage = beverage

    def get_description(self):
        return self.beverage.get_description() + ", Milk"
    def cost(self):
        return self.beverage.cost() + 0.10

class Mocha(Decorator):
    def __init__(self, beverage):
        self.beverage = beverage

    def get_description(self):
        return self.beverage.get_description() + ", Mocha"
    def cost(self):
        return self.beverage.cost() + 0.20

class Soy(Decorator):
    def __init__(self, beverage):
        self.beverage = beverage

    def get_description(self):
        return self.beverage.get_description() + ", Soy"
    def cost(self):
        return self.beverage.cost() + 0.15

class Whip(Decorator):
    def __init__(self, beverage):
        self.beverage = beverage

    def get_description(self):
        return self.beverage.get_description() + ", Whip"
    def cost(self):
        return self.beverage.cost() + 0.10

