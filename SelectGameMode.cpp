#include "Puissance4.h"
#include "SelectGameMode.h"




SelectGameMode::SelectGameMode(Puissance4* puissance4P){
    puissance4 = puissance4P;
    curseur = NULL;
    img = SDL_LoadBMP("Images/SelectGameMode.bmp");
    image = NULL;

}

SelectGameMode::~SelectGameMode(void){
    SDL_FreeSurface(img);
}

void SelectGameMode::start(){
    curseur = new Curseur(puissance4->getEngineManager());
    image = new Image(puissance4->getEngineManager(), img);

}

void SelectGameMode::stop(){
    delete curseur;
    delete image;

}
