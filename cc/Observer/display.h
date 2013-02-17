#ifndef __DISPLAY_H__
#define __DISPLAY_H__

#include <iostream>

#include "observer.h"
#include "weatherdata.h"

class Display
{
public:
    virtual void display() = 0;
};

class CurrentConditionsDisplay : public Observer, public Display
{
public:
    CurrentConditionsDisplay(WeatherData* subject) :
        temperature(0.0), humidity(0.0), weather(subject)
    {
        weather->registerObserver(this);
    }
    virtual ~CurrentConditionsDisplay()
    {
        weather->unregisterObserver(this);
    }

public:
    virtual void update(Subject* subject)
    {
        if (subject == weather) {
            temperature = weather->getTemperature();
            humidity = weather->getHumidity();
            display();
        }
    }
    virtual void display()
    {
        std::cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity." << std::endl;
    }

private:
    float temperature;
    float humidity;
    WeatherData* weather;
};

class StatisticsDisplay : public Observer, public Display
{
public:
    StatisticsDisplay(WeatherData* subject) :
        avg(0.0), max(0.0), min(0.0), cur(0.0), weather(subject)
    {
        weather->registerObserver(this);
    }
    virtual ~StatisticsDisplay()
    {
        weather->unregisterObserver(this);
    }

public:
    virtual void update(Subject* subject)
    {
        if (subject == weather) {
            cur = weather->getTemperature();
            max = cur > max ? cur : max;
            min = cur < min ? cur : min;
            avg = (max + min) / 2;
            display();
        }
    }
    virtual void display()
    {
        std::cout << "Avg/Max/Min temperature = " << avg << "/" << max << "/" << min << std::endl;
    }

private:
    float avg;
    float max;
    float min;
    float cur;
    WeatherData* weather;
};

class ForecastDisplay : public Observer, public Display
{
public:
    ForecastDisplay(WeatherData* subject):
        curr_temp(0.0), prev_temp(0.0),
        curr_hum(0.0), prev_hum(0.0),
        curr_pres(0.0), prev_pres(0.0),
        weather(subject)
    {
        weather->registerObserver(this);
    }
    virtual ~ForecastDisplay()
    {
        weather->unregisterObserver(this);
    }

public:
    virtual void update(Subject* subject)
    {
        if (subject == weather) {
            prev_temp = curr_temp;
            curr_temp = weather->getTemperature();
            prev_hum = curr_hum;
            curr_hum = weather->getHumidity();
            prev_pres = curr_pres;
            curr_pres = weather->getPressure();
            display();
        }
    }
    virtual void display()
    {
        std::cout << "Forecast:";
        std::cout << " temperature " << prev_temp << " -> " << curr_temp;
        std::cout << " humidity " << prev_hum << " -> " << curr_hum;
        std::cout << " pressure " << prev_pres << " -> " << curr_pres;
        std::cout << std::endl;
    }

private:
    float curr_temp;
    float prev_temp;
    float curr_hum;
    float prev_hum;
    float curr_pres;
    float prev_pres;
    WeatherData* weather;
};

#endif // __DISPLAY_H__

