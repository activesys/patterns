"""
client.py
"""

from duck import *
from flystrategy import *
from quackstrategy import *

def main():
    mallard = MallardDuck()
    mallard.performFly()
    mallard.performQuack()

    model = ModelDuck()
    model.performFly()
    model.setFlyStrategy(FlyWithWings())
    model.performFly()

if __name__ == '__main__':
    main()

