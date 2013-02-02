"""
inputclient.py
"""

from input import *
from managerfactory import *

def main():
    factory = ManagerFactory()
    manager = factory.create("file")
    input = manager.create_input()
    input.read()

    manager = factory.create("console")
    input = manager.create_input()
    input.read()

    manager = factory.create("net")
    input = manager.create_input()
    input.read()

if __name__ == '__main__':
    main()

