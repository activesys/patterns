"""
facade.py
"""

from subsys import *

class HomeTheaterFacade:
    def __init__(self, tuner, amp, screen, popp, lights, dvd, cd, proj):
        self.tuner = tuner
        self.amp = amp
        self.screen = screen
        self.popp = popp
        self.lights = lights
        self.dvd = dvd
        self.cd = cd
        self.proj = proj

    def watch_movie(self, name):
        self.popp.on()
        self.lights.on()
        self.screen.on()
        self.proj.on()
        self.amp.on()
        self.dvd.on()
        print('Playing "%s"' % name)
    def end_movie(self):
        self.popp.off()
        self.lights.off()
        self.screen.off()
        self.proj.off()
        self.amp.off()
        self.dvd.off()

