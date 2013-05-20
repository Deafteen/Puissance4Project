#include "Puissance4.h"
#include "OptionMenu.h"


OptionMenu::OptionMenu(Puissance4* puissance4P) : Menu(puissance4P)
{
    img = SDL_LoadBMP("Images/grid.bmp");//on a pas d image pour option menu
    closeApplicationObject = NULL;
}


OptionMenu::~OptionMenu(void){

}

void OptionMenu::start() {
    curseur = new CurseurGeneralMenu(puissance4->getEngineManager());
    image = new Image(puissance4->getEngineManager(), img);
    closeApplicationObject = new CloseApplicationObject(puissance4->getEngineManager());
}

void OptionMenu::stop() {
    delete curseur;
    delete image;
    delete closeApplicationObject;
}
