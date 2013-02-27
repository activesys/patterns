"""
machine.py
"""

from state import *

class GumballMachine:
    def __init__(self, count):
        self.count = count
        self.has_quarter_state = HasQuarterState()
        self.no_quarter_state = NoQuarterState()
        self.sold_state = SoldState()
        self.sold_out_state = SoldOutState()
        self.state = self.no_quarter_state if self.count > 0 else self.sold_out_state

    def insert_quarter(self):
        self.state.insert_quarter(self)
    def eject_quarter(self):
        self.state.eject_quarter(self)
    def turn_crank(self):
        self.state.turn_crank(self)
        self.state.dispense(self)

    def set_state(self, state):
        self.state = state
    def get_has_quarter_state(self):
        return self.has_quarter_state
    def get_no_quarter_state(self):
        return self.no_quarter_state
    def get_sold_state(self):
        return self.sold_state
    def get_sold_out_state(self):
        return self.sold_out_state
    def get_count(self):
        return self.count
    def release_ball(self):
        print("A gumball comes rolling out the slot...")
        if self.count > 0:
            self.count = self.count - 1

