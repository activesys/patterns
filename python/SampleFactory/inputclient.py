"""
inputclient.py
"""

from input import *
from inputfactory import *

def main():
    factory = InputFactory()

    input = factory.create("file")
    input.read()

    input = factory.create("console")
    input.read()

    input = factory.create("net")
    input.read()

if __name__ == '__main__':
    main()

