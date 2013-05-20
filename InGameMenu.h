#pragma once
#include "State.h"
#include "Curseur.h"
#include "CloseApplicationObject.h"
#include "SDL/SDL.h"
#include "Image.h"

class Puissance4;

class InGameMenu: public State
{
public:
    InGameMenu(Puissance4*);
    ~InGameMenu(void);

    void start();
    void stop();

private:
    Puissance4* puissance4;
    Curseur* curseur;
    Image * image;
    SDL_Surface* img;
    CloseApplicationObject *closeApplicationObject;
};

