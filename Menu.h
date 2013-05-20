#pragma once
#include "State.h"
#include "CurseurGeneralMenu.h"
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
    CurseurGeneralMenu* curseur;
    Image * image;
    SDL_Surface* img;
};
