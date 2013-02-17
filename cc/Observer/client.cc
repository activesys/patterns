#include "observer.h"
#include "display.h"
#include "subject.h"
#include "weatherdata.h"

int main(int argc, char* argv[])
{
    WeatherData weather;
    CurrentConditionsDisplay current(&weather);
    StatisticsDisplay statistics(&weather);

    weather.setMeasurements(80.0, 65.3, 49.1);
    weather.setMeasurements(88.4, 60.2, 29.2);

    ForecastDisplay forecast(&weather);

    weather.setMeasurements(78.9, 33.2, 90.2);
    weather.setMeasurements(100.3, 78.4, 10.3);

    return 0;
}

