"""
client.py
"""

from duck import *
from turkey import *
from adapter import *

def test_duck(duck):
    duck.quack()
    duck.fly()

def main():
    duck = MallardDuck()
    turkey = WildTurkey()
    adapter = TurkeyAdapter(turkey)

    print("The Turkey says...")
    turkey.gobble()
    turkey.fly()

    print("\nThe Duck says...")
    test_duck(duck)

    print("\nThe TurkeyAdapter says...")
    test_duck(adapter)

if __name__ == '__main__':
    main()

