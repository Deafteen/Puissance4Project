#pragma once
#include "DisplayObject.h"
#include "SDL/SDL.h"
#include "EngineManager.h"
#include "GraphicEngine.h"

class EngineManager;

class Image : public DisplayObject {


public:
    Image(EngineManager*,SDL_Surface*);
    ~Image(void);

    void display();


protected:
    EngineManager* engineManager;
    SDL_Surface* sdl_surface;
};
