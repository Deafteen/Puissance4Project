#include "Token.h"
#include "EngineManager.h"

//SDL_Surface *imageOptionMenu = NULL;

Token::Token(EngineManager* engineManagerP)
{
    engineManager = engineManagerP;

	imageOptionMenu = SDL_LoadBMP("Images/OptionMenu.bmp");
    engineManager->GetGraphicEngine()->addObject(this);
	engineManager->GetStateEngine()->addComputeObject(this);
}


Token::~Token(void)
{
    engineManager->GetGraphicEngine()->removeObject(this);
	engineManager->GetStateEngine()->removeComputeObject(this);
    SDL_FreeSurface(imageOptionMenu);
}

void Token::compute() {

}

void Token::display() {
    //Graphics::display_image(imageOptionMenu,0,0);
    engineManager->GetGraphicEngine()->displayImage(imageOptionMenu, 0, 0);
}
