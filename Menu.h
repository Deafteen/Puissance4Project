#pragma once
#include "State.h"
#include "Curseur.h"
#include "SDL/SDL.h"
#include "Image.h"

class Menu : public State
{
public:
    Menu(Puissance4*);
    ~Menu(void);
    virtual void start();
    virtual void stop();
protected:
    Puissance4* puissance4;
    Curseur* curseur;
    Image * image;
    SDL_Surface* img;
};
