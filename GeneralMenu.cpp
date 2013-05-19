#include "Puissance4.h"
#include "GeneralMenu.h"


GeneralMenu::GeneralMenu(Puissance4* puissance4P)
{
    puissance4 = puissance4P;
    curseur = NULL;
    img = SDL_LoadBMP("Images/Menu_puissance4.bmp");
    image = NULL;

}


GeneralMenu::~GeneralMenu(void)
{
    SDL_FreeSurface(img);
}

void GeneralMenu::start() {
    curseur = new Curseur(puissance4->getEngineManager());
    image = new Image(puissance4->getEngineManager(), img);

}
void GeneralMenu::stop() {
    delete curseur;
    delete image;
}
