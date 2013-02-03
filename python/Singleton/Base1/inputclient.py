"""
inputclient.py
"""

from input import *
from inputfactory import *

def main():
    input = InputFactory().create("file")
    input.read()

    input = InputFactory().create("console")
    input.read()

    input = InputFactory().create("net")
    input.read()

if __name__ == '__main__':
    main()

