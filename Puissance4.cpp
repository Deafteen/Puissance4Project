#include "Puissance4.h"

Puissance4::Puissance4(void)
{
    engineManager = new EngineManager(this);
    stateManager = new StateManager(this);
}


Puissance4::~Puissance4(void)
{
}

void Puissance4::launch() {
    while(engineManager->GetInputEngine()->GetDisplay() && SDL_WaitEvent(&event)) {// && SDL_WaitEvent(&event)
            engineManager->start();//rename start();
            stateManager->process();//rename process();
            //SDL_Delay(5000);            
    }
}

EngineManager* Puissance4::getEngineManager() {
    return engineManager;
}

StateManager* Puissance4::getStateManager() {
    return stateManager;
}

SDL_Event Puissance4::getSDL_Event() {
    return event;
}