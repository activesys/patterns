"""
weatherdata.py
"""

from subject import *

class WeatherData(Subject):
    def __init__(self):
        Subject.__init__(self)
        self.temperature = 0.0
        self.humidity = 0.0
        self.pressure = 0.0

    def get_temperature(self):
        return self.temperature
    def get_humidity(self):
        return self.humidity
    def get_pressure(self):
        return self.pressure

    def set_measurements(self, temperature, humidity, pressure):
        self.temperature = temperature
        self.humidity = humidity
        self.pressure = pressure
        self.notify()

