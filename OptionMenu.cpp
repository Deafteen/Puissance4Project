#include "Puissance4.h"
#include "OptionMenu.h"


OptionMenu::OptionMenu(Puissance4* puissance4P)
{
    puissance4 = puissance4P;
    curseur = NULL;
    img = SDL_LoadBMP("Images/grid.bmp");//on a pas d image pour option menu
    image = NULL;
    closeApplicationObject = NULL;
}


OptionMenu::~OptionMenu(void)
{
    SDL_FreeSurface(img);
}

void OptionMenu::start() {

    curseur = new Curseur(puissance4->getEngineManager());
    image = new Image(puissance4->getEngineManager(), img);

    closeApplicationObject = new CloseApplicationObject(puissance4->getEngineManager());
}

void OptionMenu::stop() {

    delete curseur;
    delete image;
    delete closeApplicationObject;
}
