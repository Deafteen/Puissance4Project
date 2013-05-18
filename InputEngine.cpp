#include "InputEngine.h"
#include "SDL.h"
#include <iostream>
#include "EngineManager.h"
#include "Puissance4.h"

class Puissance4;

InputEngine::InputEngine(EngineManager* engineManagerP)
{
	display = true;
	toucheAppuyeeSpaceBar = false;
	engineManager = engineManagerP;
}

InputEngine::~InputEngine(void)
{
}

void InputEngine::addInputObject(InputObject* inputObject) {
    inputObjectList.push_front(inputObject);
}

void InputEngine::removeInputObject(InputObject* inputObject) {
    inputObjectList.remove(inputObject);
}

bool InputEngine::GetToucheAppuyeeSpaceBar() {
	return toucheAppuyeeSpaceBar;
}

bool InputEngine::GetDisplay() {
	return display;
}

void InputEngine::setDisplay(bool displayArg) {
    display = displayArg;
}

SDL_Event InputEngine::getSDL_Event() {
    return engineManager->getPuissance4()->getSDL_Event();
}


void InputEngine::process() {
	SDL_Event event2 = engineManager->getPuissance4()->getSDL_Event();
    //s'il y a des evenements en attente, on les gere
	while (SDL_PollEvent(&event2))
	{
        // si l'utilisateur demande a fermer la fenetre, on quitte le programme
		if (event2.type == SDL_QUIT)
			display = false;
		// si l'utilisateur a appuye sur une touche...
		if (event2.type == SDL_KEYDOWN || event2.type == SDL_KEYUP) {
            for (list<InputObject*>::iterator it = inputObjectList.begin(); it != inputObjectList.end(); it++) {
		        (*it)->process(event2);// CEST LE PROCESS de l interface InputObject
	        }
		}
	}
}

