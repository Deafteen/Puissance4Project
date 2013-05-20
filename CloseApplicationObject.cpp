#include "CloseApplicationObject.h"
#include "EngineManager.h"
#include "StateManager.h"
#include "Puissance4.h"


CloseApplicationObject::CloseApplicationObject(EngineManager* engineManagerP)
{
    engineManager = engineManagerP;
    powerOn = true;
    engineManager->GetInputEngine()->addInputObject(this);
}


CloseApplicationObject::~CloseApplicationObject(void)
{
    engineManager->GetInputEngine()->removeInputObject(this);
}

void CloseApplicationObject::process(SDL_Event event) {
    switch (event.key.keysym.sym)
    {
            case SDLK_ESCAPE :
            //engineManager->GetInputEngine()->setDisplay(event.type == SDL_KEYDOWN);
            engineManager->getPuissance4()->getStateManager()->setNxtMenu(StateManager::StateType::GENERAL_MENU);
            break;
    }
}
