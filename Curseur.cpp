#include "Curseur.h"
#include "EngineManager.h"
#include "Puissance4.h"
#include "StateManager.h"

SDL_Surface *image3 =NULL;

Curseur::Curseur(EngineManager* engineManagerP) {
    positionX = 60; positionY = 100;
    pas = 50;
    
    engineManager = engineManagerP;
    moveCursorLeft = false;
    moveCursorRight = false;
    moveCursorDown = false;
    moveCursorUp = false;
    engineManager->GetGraphicEngine()->addObject(this);
	engineManager->GetStateEngine()->addComputeObject(this);
    engineManager->GetInputEngine()->addInputObject(this);
    if( image3 == NULL){
	    image3 = SDL_LoadBMP("Images/curseurTRANSPARENT.bmp");
        SDL_SetColorKey(image3, SDL_SRCCOLORKEY, SDL_MapRGB(image3->format, 0, 0, 255)); //on gere la transparence du curseur
        //le curseur a le fond de son image colorier en bleu 0, 0, 255. Cette fonction rend le bleu invisible
	}
}


Curseur::~Curseur(void)
{
    engineManager->GetGraphicEngine()->removeObject(this);
	engineManager->GetStateEngine()->removeComputeObject(this);
    engineManager->GetInputEngine()->removeInputObject(this);
}

void Curseur::process(SDL_Event event) {
    /* switch pour savoir quelle touche est appuyée */
    switch (event.key.keysym.sym)
    {
	    case SDLK_LEFT :
            moveCursorLeft = event.type == SDL_KEYDOWN;
		    break;
	    case SDLK_RIGHT :
            moveCursorRight = event.type == SDL_KEYDOWN;
		    break;
        case SDLK_UP :
            moveCursorUp = event.type == SDL_KEYDOWN;
            break;
        case SDLK_DOWN :
            moveCursorDown = event.type == SDL_KEYDOWN;
    }
}

void Curseur::compute() {
    if(moveCursorLeft) {
        engineManager->getPuissance4()->getStateManager()->setNxtMenu(StateManager::StateType::OPTION);
    }
    if(moveCursorRight) {
        engineManager->getPuissance4()->getStateManager()->setNxtMenu(StateManager::StateType::GENERAL_MENU);
    }
    if(moveCursorUp && positionY - pas > 0) {
        positionY -= pas;
    }
    if(moveCursorDown && positionY + pas < engineManager->GetGraphicEngine()->getHeight()) {
        positionY += pas;
    }
}

void Curseur::display() {
    engineManager->GetGraphicEngine()->displayImage(image3, positionX, positionY);
}