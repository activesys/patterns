"""
display.py
"""

from observer import *
from weatherdata import *

class Display:
    def display(self):
        pass

class CurrentConditionsDisplay(Observer, Display):
    def __init__(self, weather):
        self.weather = weather
        self.temperature = 0.0
        self.humidity = 0.0

        self.weather.register(self)

    def __del__(self):
        self.weather.unregister(self)

    def update(self, subject):
        if self.weather == subject:
            self.temperature = self.weather.get_temperature()
            self.humidity = self.weather.get_humidity()

            self.display()

    def display(self):
        print("Current conditions: %.2fF degrees and %.2f%% humidity." % (self.temperature, self.humidity))

class StatisticsDisplay(Observer, Display):
    def __init__(self, weather):
        self.weather = weather
        self.avg = 0.0
        self.max = 0.0
        self.min = 0.0
        self.cur = 0.0

        self.weather.register(self)

    def __del__(self):
        self.weather.unregister(self)

    def update(self, subject):
        if self.weather == subject:
            self.cur = self.weather.get_temperature()
            self.max = self.cur if self.cur > self.max else self.max
            self.min = self.cur if self.cur < self.min else self.min
            self.avg = (self.max + self.min) / 2.0

            self.display()

    def display(self):
        print("Avg/Max/Min temperature = %.2f/%.2f/%.2f" % (self.avg, self.max, self.min))

class ForecastDisplay(Observer, Display):
    def __init__(self, weather):
        self.weather = weather
        self.curr_temp = 0.0
        self.prev_temp = 0.0
        self.curr_hum = 0.0
        self.prev_hum = 0.0
        self.curr_pres = 0.0
        self.prev_pres = 0.0

        self.weather.register(self)

    def __del__(self):
        self.weather.unregister(self)

    def update(self, subject):
        if self.weather == subject:
            self.prev_temp = self.curr_temp
            self.curr_temp = self.weather.get_temperature()
            
            self.prev_hum = self.curr_hum
            self.curr_hum = self.weather.get_humidity()

            self.prev_pres = self.curr_pres
            self.curr_pres = self.weather.get_pressure()

            self.display()

    def display(self):
        print("Forecast: temperature %.2f -> %.2f humidity %.2f -> %.2f pressure %.2f -> %.2f" %
                (self.prev_temp, self.curr_temp, self.prev_hum, self.curr_hum, self.prev_pres, self.curr_pres))

