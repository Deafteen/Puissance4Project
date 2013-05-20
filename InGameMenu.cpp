#include "Puissance4.h"
#include "InGameMenu.h"


InGameMenu::InGameMenu(Puissance4* puissance4P)
{
    puissance4 = puissance4P;
    curseur = NULL;
    img = SDL_LoadBMP("Images/grid.bmp");//on a pas d image pour option menu
    image = NULL;
    closeApplicationObject = NULL;
}


InGameMenu::~InGameMenu(void)
{
    SDL_FreeSurface(img);
}

void InGameMenu::start() {

    curseur = new Curseur(puissance4->getEngineManager());
    image = new Image(puissance4->getEngineManager(), img);

    closeApplicationObject = new CloseApplicationObject(puissance4->getEngineManager());
}

void InGameMenu::stop() {

    delete curseur;
    delete image;
    delete closeApplicationObject;
}
