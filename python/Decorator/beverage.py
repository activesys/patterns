"""
beverage.py
"""

class Beverage:
    def __init__(self):
        self.description = ""

    def get_description(self):
        return self.description
    def cost(self):
        pass

class HouseBlend(Beverage):
    def __init__(self):
        self.description = "House Blend Coffee"

    def cost(self):
        return 0.89

class DarkRoast(Beverage):
    def __init__(self):
        self.description = "Dark Roast Coffee"

    def cost(self):
        return 0.99

class Decaf(Beverage):
    def __init__(self):
        self.description = "Decaf Coffee"

    def cost(self):
        return 1.05

class Espresso(Beverage):
    def __init__(self):
        self.description = "Espresso Coffee"

    def cost(self):
        return 1.99

