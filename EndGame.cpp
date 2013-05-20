#include "Puissance4.h"
#include "EndGame.h"

EndGame::EndGame(Puissance4* puissance4P): Menu(puissance4P)
{
    img = SDL_LoadBMP("Images/Menu_puissance4.bmp");
}
EndGame::~EndGame(){
}
