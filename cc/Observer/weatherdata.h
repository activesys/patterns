#ifndef __WEATHER_DATA_H__
#define __WEATHER_DATA_H__

#include "subject.h"

class WeatherData : public Subject
{
public:
    WeatherData() : temperature(0.0), humidity(0.0), pressure(0.0) {}

public:
    float getTemperature()
    {
        return temperature;
    }
    float getHumidity()
    {
        return humidity;
    }
    float getPressure()
    {
        return pressure;
    }
    void setMeasurements(float temp, float hum, float pres)
    {
        temperature = temp;
        humidity = hum;
        pressure = pres;

        notify();
    }

private:
    float temperature;
    float humidity;
    float pressure;
};

#endif // __WEATHER_DATA_H__

