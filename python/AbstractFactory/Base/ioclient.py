"""
ioclient.py
"""

from input import *
from output import *
from iofactory import *

def main():
    factory = FileIOFactory()
    input = factory.create_input()
    output = factory.create_output()
    input.read()
    output.write()

    factory = ConsoleIOFactory()
    input = factory.create_input()
    output = factory.create_output()
    input.read()
    output.write()

    factory = NetIOFactory()
    input = factory.create_input()
    output = factory.create_output()
    input.read()
    output.write()

if __name__ == '__main__':
    main()

