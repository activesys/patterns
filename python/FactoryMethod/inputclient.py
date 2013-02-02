"""
inputclient.py
"""

from input import *
from inputfactory import *

def main():
    factory = FileInputFactory()
    input = factory.create()
    input.read()

    factory = ConsoleInputFactory()
    input = factory.create()
    input.read()

    factory = NetInputFactory()
    input = factory.create()
    input.read()

if __name__ == '__main__':
    main()

