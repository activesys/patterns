"""
client.py
"""

from observer import *
from display import *
from subject import *
from weatherdata import *

def main():
    weather = WeatherData()
    current = CurrentConditionsDisplay(weather)
    statistics = StatisticsDisplay(weather)

    weather.set_measurements(88.07, 23.1, 23.2)
    weather.set_measurements(67.2, 30.33, 89.4)

    forecast = ForecastDisplay(weather)

    weather.set_measurements(-90.7, 10.8, 34.54)
    weather.set_measurements(88.88, 44.4, 66.6)

if __name__ == '__main__':
    main()

