"""
client.py
"""

from machine import *

def main():
    machine = GumballMachine(5)

    machine.insert_quarter()
    machine.turn_crank()

    print("")

    machine.insert_quarter()
    machine.eject_quarter()
    machine.turn_crank()

    print("")

    machine.insert_quarter()
    machine.turn_crank()
    machine.insert_quarter()
    machine.turn_crank()
    machine.eject_quarter()

    print("")

    machine.insert_quarter()
    machine.insert_quarter()
    machine.turn_crank()
    machine.insert_quarter()
    machine.turn_crank()
    machine.insert_quarter()
    machine.turn_crank()

if __name__ == '__main__':
    main()

