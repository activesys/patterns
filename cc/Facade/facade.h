#ifndef __FACADE_H__
#define __FACADE_H__

#include <string>

#include "subsys.h"

class HomeTheaterFacade
{
public:
    HomeTheaterFacade(
        Tuner* tuner, Amplifier* amplifier, Screen* screen, PopcomPopper* popcompopper,
        TheaterLights* theaterlights, Dvdplayer* dvdplayer, Cdplayer* cdplayer, Projector* projector)
    {
        this->tuner = tuner;
        this->amplifier = amplifier;
        this->screen = screen;
        this->popcompopper = popcompopper;
        this->theaterlights = theaterlights;
        this->dvdplayer = dvdplayer;
        this->cdplayer = cdplayer;
        this->projector = projector;
    }

public:
    void watchMovie(std::string name)
    {
        popcompopper->on();
        theaterlights->on();
        screen->on();
        projector->on();
        amplifier->on();
        dvdplayer->on();
        std::cout << "Playing \"" << name << "\"" << std::endl;
    }
    void endMovie()
    {
        popcompopper->off();
        theaterlights->off();
        screen->off();
        projector->off();
        amplifier->off();
        dvdplayer->off();
    }

private:
    Tuner* tuner;
    Amplifier* amplifier;
    Screen* screen;
    PopcomPopper* popcompopper;
    TheaterLights* theaterlights;
    Dvdplayer* dvdplayer;
    Cdplayer* cdplayer;
    Projector* projector;
};

#endif // __FACADE_H__

