"""
client.py
"""

from subsys import *
from facade import *

def main():
    home_theater = HomeTheaterFacade(
        Tuner(), Amplifier(), Screen(), PopcomPopper(),
        TheaterLights(), DvdPlayer(), CdPlayer(), Projector())

    home_theater.watch_movie("Babala")
    home_theater.end_movie()

if __name__ == '__main__':
    main()

