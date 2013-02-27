"""
state.py
"""

from machine import *

class State:
    def insert_quarter(self, machine):
        pass
    def eject_quarter(self, machine):
        pass
    def turn_crank(self, machine):
        pass
    def dispense(self, machine):
        pass

class HasQuarterState(State):
    def insert_quarter(self, machine):
        print("You can't insert another quarter")
    def eject_quarter(self, machine):
        print("Quarter returned")
        machine.set_state(machine.get_no_quarter_state())
    def turn_crank(self, machine):
        print("You turned...")
        machine.set_state(machine.get_sold_state())
    def dispense(self, machine):
        print("No gumball dispensed")

class SoldState(State):
    def insert_quarter(self, machine):
        print("Please wait, we're alread giving you a gumball")
    def eject_quarter(self, machine):
        print("Sorry, you alread turned the crank")
    def turn_crank(self, machine):
        print("Turning twice doesn't get you another gumball!")
    def dispense(self, machine):
        machine.release_ball()
        if machine.get_count() > 0:
            machine.set_state(machine.get_no_quarter_state())
        else:
            print("Oops, out of gumballs!")
            machine.set_state(machine.get_sold_out_state())

class NoQuarterState(State):
    def insert_quarter(self, machine):
        print("You inserted a quarter")
        machine.set_state(machine.get_has_quarter_state())
    def eject_quarter(self, machine):
        print("You haven't inserted a quarter")
    def turn_crank(self, machine):
        print("You turned, but there's no qurater")
    def dispense(self, machine):
        print("You need to pay first")

class SoldOutState(State):
    def insert_quarter(self, machine):
        print("You can't insert a quarter, the machine is sold of")
    def eject_quarter(self, machine):
        print("You can't eject, you haven't inserted a quarter yet")
    def turn_crank(self, machine):
        print("You turned, but there are no gumballs")
    def dispense(self, machine):
        print("No gumball dispensed")

