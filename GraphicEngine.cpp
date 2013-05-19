#include "graphics.h"
#include "GraphicEngine.h"
#include "EngineManager.h"

GraphicEngine::GraphicEngine(EngineManager* EngineManagerP)
{
	engineManager = EngineManagerP;

    width = 800;
    height = 600;
	//Graphics::init_graphics();
    SDL_Init(SDL_INIT_VIDEO);
	screen = SDL_SetVideoMode(width, height, 32, SDL_HWSURFACE);
    //backgroundColor = Graphics::build_color(0, 0, 0);
}

GraphicEngine::~GraphicEngine(void)
{
}

void GraphicEngine::displayImage(SDL_Surface* image, int x, int y) {
    SDL_Rect position;

    position.x = x;
    position.y = y;
    SDL_BlitSurface(image, NULL, screen, &position);
}

void GraphicEngine::addObject(DisplayObject* displayObject)
{
	displayObjectList.push_front(displayObject);
}

void GraphicEngine::removeObject(DisplayObject* displayObject)
{
	displayObjectList.remove(displayObject);
}

void GraphicEngine::process()
{
	// on verrouille l'ecran /
	//Graphics::lock();

	// on remplit la fenetre avec la couleur cree au debut de la fonction
	//Graphics::fill_screen(SDL_MapRGB(screen->format, 0, 0, 0));

    SDL_WM_SetCaption("Puissance4", NULL); // titre de notre fenetre
    
    // on remplit la fenetre avec une couleur
    SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));

	// on dessine un triangle
	//engineManager->GetStateEngine()->GetSpaceShip()->displaySingularShip();

	for (list<DisplayObject*>::iterator it = displayObjectList.begin(); it != displayObjectList.end(); it++) {
		(*it)->display();
	}

    SDL_Flip(screen);

    // on deverouille et on rafraichit l'ecran
	//Graphics::unlock();

	//on attend le temps necessaire pour atteindre le taux de rafraichissement souhaite
	//Graphics::sync();
}

int GraphicEngine::getHeight(){
    return height;
}
