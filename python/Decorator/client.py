"""
client.py
"""

from beverage import *
from decorator import *

def main():
    espresso = Espresso()
    print("%s $%.2f" % (espresso.get_description(), espresso.cost()))

    whip = Whip(Mocha(Mocha(DarkRoast())))
    print("%s $%.2f" % (whip.get_description(), whip.cost()))

    milk = Milk(Mocha(Soy(HouseBlend())))
    print("%s $%.2f" % (milk.get_description(), whip.cost()))

if __name__ == '__main__':
    main()

