"""
adapter.py
"""

from duck import *
from turkey import *

class TurkeyAdapter(Duck, Turkey):
    def quack(self):
        self.gobble()
    def fly(self):
        self.fly_short()

    def fly_short(self):
        print("Now I'm fly a log distance")

