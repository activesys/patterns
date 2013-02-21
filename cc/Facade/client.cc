#include "subsys.h"
#include "facade.h"

int main(int argc, char* argv[])
{
    HomeTheaterFacade home(
        new Tuner(), new Amplifier(), new Screen(), new PopcomPopper(),
        new TheaterLights(), new Dvdplayer(), new Cdplayer(), new Projector());

    home.watchMovie("Babala");
    home.endMovie();

    return 0;
}

