#include "Puissance4.h"
#include "RulesMenu.h"

RulesMenu::RulesMenu(Puissance4* puissance4P): Menu(puissance4P)
{
    img = SDL_LoadBMP("Images/RulesMenu.bmp");
}
RulesMenu::~RulesMenu(){

}
