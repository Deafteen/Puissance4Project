#pragma once
#include "InputObject.h"
#include "DisplayObject.h"
#include "ComputeObject.h"
#include "SDL.h"

class EngineManager;

class Curseur : public InputObject, public DisplayObject, public ComputeObject
{
public:
    Curseur(EngineManager*);
    ~Curseur(void);

    void process(SDL_Event);
    void compute();
    void display();

private:
int positionX, positionY;
int pas; //le pas de deplacement du curseur en vertical
EngineManager* engineManager;
bool moveCursorLeft;
bool moveCursorRight;
bool moveCursorUp;
bool moveCursorDown;
};

