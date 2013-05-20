#include "Puissance4.h"
#include "InGameMenu.h"

InGameMenu::InGameMenu(Puissance4* puissance4P) : Menu(puissance4P)
{
    img = SDL_LoadBMP("Images/grid.bmp");//on a pas d image pour option menu
}
InGameMenu::~InGameMenu(void)
{

}
