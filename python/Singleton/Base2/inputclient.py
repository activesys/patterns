"""
inputclient.py
"""

from input import *
from inputfactory import *

def main():
    input = InputFactory.instance().create("file")
    input.read()

    input = InputFactory.instance().create("console")
    input.read()

    input = InputFactory.instance().create("net")
    input.read()

if __name__ == '__main__':
    main()

