#include "Puissance4.h"
#include "Menu.h"

Menu::Menu(Puissance4* puissance4P)
{
    puissance4 = puissance4P;
    curseur = NULL;
    img = NULL;
    image = NULL;

}


Menu::~Menu(void)
{
    SDL_FreeSurface(img);
}

void Menu::start() {
    curseur = new CurseurGeneralMenu(puissance4->getEngineManager());
    image = new Image(puissance4->getEngineManager(), img);

}
void Menu::stop() {
    delete curseur;
    delete image;
}
