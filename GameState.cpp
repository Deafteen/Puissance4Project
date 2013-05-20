#include "Puissance4.h"
#include "GameState.h"

GameState::GameState(Puissance4* puissance4P): Menu(puissance4P)
{
    img = SDL_LoadBMP("Images/Menu_puissance4.bmp");
}
GameState::~GameState(){

}
