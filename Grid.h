#pragma once
#include "ComputeObject.h"
#include "DisplayObject.h"
#include "SDL.h"

class EngineManager;

class Grid : public ComputeObject, DisplayObject {
private:
    EngineManager* engineManager;
	bool adjacencyMatrix;

public:
	Grid(EngineManager*);
	~Grid(void);

	void display();
	void compute();
    //addToken
    SDL_Surface *background;
};
