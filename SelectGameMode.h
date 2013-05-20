#pragma once
#include "State.h"
#include "Curseur.h"
#include "SDL/SDL.h"
#include "Image.h"

class Puissance4;

class SelectGameMode : public State
{
public:
    SelectGameMode(Puissance4*);
    ~SelectGameMode(void);

    void start();
    void stop();



private:
    Puissance4* puissance4;
    Curseur* curseur;
    Image * image;
    SDL_Surface* img;

};

