#include "Puissance4.h"
#include "GeneralMenu.h"


GeneralMenu::GeneralMenu(Puissance4* puissance4P): Menu(puissance4P)
{
    img = SDL_LoadBMP("Images/Menu_puissance4.bmp");
}
GeneralMenu::~GeneralMenu(){

}
