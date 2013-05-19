#include "EngineManager.h"

#include "Grid.h"

SDL_Surface *background =NULL;

Grid::Grid(EngineManager* engineManagerP) {
	engineManager = engineManagerP;
	//adjacencyMatrix = new bool [6][7];
	

    background = SDL_LoadBMP("Images/Menu_puissance4.bmp");
	
	engineManager->GetGraphicEngine()->addObject(this);
	engineManager->GetStateEngine()->addComputeObject(this);
	
}
Grid::~Grid() {
	engineManager->GetGraphicEngine()->removeObject(this);
	engineManager->GetStateEngine()->removeComputeObject(this);
}

void Grid::display() {
	//Graphics::display_image(background,0,0);
    engineManager->GetGraphicEngine()->displayImage(background, 0, 0);
	
}
void Grid::compute() {
	
}