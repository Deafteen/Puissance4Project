#pragma once
#include "Engine.h"
#include "DisplayObject.h"
#pragma once
#include <list>

using namespace std;

class EngineManager;

class GraphicEngine : public Engine {

    int height, width;   
    EngineManager* engineManager;
	std::list<DisplayObject*> displayObjectList;

	Uint8 backgroundColor;
    SDL_Surface* screen;

public:

	GraphicEngine(EngineManager*);
	~GraphicEngine(void);

	void process();
	void display();

	void addObject(DisplayObject*); //ici addDisplayObject(DisplayObject*)
	void removeObject(DisplayObject*); // ici RemoveDisplayObject(DisplayObject*)
    void displayImage(SDL_Surface*, int, int);

    int getHeight();
};

