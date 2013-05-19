#pragma once
#include "DisplayObject.h"
#include "ComputeObject.h"
#include "SDL.h"

class EngineManager;

class Token : public DisplayObject, ComputeObject
{
public:
    Token(EngineManager*);
    ~Token(void);

    void compute();
    void display();

private:
    EngineManager* engineManager;
    SDL_Surface* imageOptionMenu;
};

