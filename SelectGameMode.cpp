#include "Puissance4.h"
#include "SelectGameMode.h"

SelectGameMode::SelectGameMode(Puissance4* puissance4P) : Menu(puissance4P) {
    img = SDL_LoadBMP("Images/SelectGameMode.bmp");
}
SelectGameMode::~SelectGameMode(void){

}
