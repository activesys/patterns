"""
client.py
"""

from beverage import *

def main():
    tea = Tea()
    coffee = Coffee()

    print("Making tea...")
    tea.prepare_recipe()

    print("Making coffee...")
    coffee.prepare_recipe()

if __name__ == '__main__':
    main()

