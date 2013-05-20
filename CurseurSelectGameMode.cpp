#include "CurseurSelectGameMode.h"
#include "EngineManager.h"
#include "Puissance4.h"
#include "StateManager.h"

CurseurSelectGameMode::CurseurSelectGameMode(EngineManager* engineManagerP) : Curseur(engineManagerP){
    positionX = 60; positionY = 100;
    pas = 50;
    image3 = SDL_LoadBMP("Images/curseurTRANSPARENT.bmp");
    SDL_SetColorKey(image3, SDL_SRCCOLORKEY, SDL_MapRGB(image3->format, 0, 0, 255)); //on gere la transparence du curseur
    //le curseur a le fond de son image colorier en bleu 0, 0, 255. Cette fonction rend le bleu invisible
}


CurseurSelectGameMode::~CurseurSelectGameMode(void)
{
}

void CurseurSelectGameMode::compute() {
    if(moveCursorLeft) {
        engineManager->getPuissance4()->getStateManager()->setNxtMenu(StateManager::StateType::OPTION_MENU);
    }
    if(moveCursorRight) {
        engineManager->getPuissance4()->getStateManager()->setNxtMenu(StateManager::StateType::GENERAL_MENU);
    }

    if(moveCursorUp){
       ligneNum = (ligneNum - 1)%4;
       if(ligneNum == -1){
           ligneNum = 3;
       }
       positionY = ligneNum * 100 + 100;
    }

    if(moveCursorDown){
       ligneNum = (ligneNum + 1)%4;
       positionY = ligneNum * 100 + 100;
    }

    if(pressEscape) {
        engineManager->getPuissance4()->getStateManager()->setNxtMenu(StateManager::StateType::GENERAL_MENU);
    }

}

void CurseurSelectGameMode::display() {
    engineManager->GetGraphicEngine()->displayImage(image3, positionX, positionY);
}





































