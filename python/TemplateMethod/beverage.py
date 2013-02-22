"""
beverage.py
"""

class CaffeineBeverage:
    def prepare_recipe(self):
        self.boil_water()
        self.brew()
        self.pour_in_cup()
        self.add_condiments()

    def boil_water(self):
        print("Boiling water")
    def pour_in_cup(self):
        print("Pouring into cup")

    def brew(self):
        pass
    def add_condiments(self):
        pass

class Tea(CaffeineBeverage):
    def brew(self):
        print("Steeping the tea")
    def add_condiments(self):
        print("Adding Lemon")

class Coffee(CaffeineBeverage):
    def brew(self):
        print("Dripping Coffee through filter")
    def add_condiments(self):
        print("Adding Suger and Milk")

