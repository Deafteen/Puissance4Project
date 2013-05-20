#include "Puissance4.h"
#include "RulesMenu.h"

RulesMenu::RulesMenu(Puissance4* puissance4P): Menu(puissance4P)
{
    img = SDL_LoadBMP("Images/RulesMenu.bmp");
}
RulesMenu::~RulesMenu(){

}

void RulesMenu::start(){
    cao = new CloseApplicationObject(puissance4->getEngineManager());
    image = new Image(puissance4->getEngineManager(), img);
    curseur = NULL;
}

void RulesMenu::stop(){
    delete cao;
    delete image;
}
