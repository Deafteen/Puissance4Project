#include "EngineManager.h"


EngineManager::EngineManager(void)
{
	inputEngine = new InputEngine(this);
	stateEngine = new StateEngine(this);
	graphicEngine = new GraphicEngine(this);
	engineList.push_front(inputEngine);
	engineList.push_back(stateEngine);
	engineList.push_back(graphicEngine);
	// new grille ou new manager ?
	
	grid= new Grid(this);
}

EngineManager::~EngineManager(void)
{

}

void EngineManager::start()
{
	while(inputEngine->GetDisplay()) {
		for (std::list<Engine*>::iterator it = engineList.begin(); it != engineList.end(); it++) {
			(*it)->process();
		}
		// mettre statemanager en fonctionnement ?
		//temps avec sleep
	}
}

//Getters
InputEngine* EngineManager::GetInputEngine()
{
	return inputEngine;
}

StateEngine* EngineManager::GetStateEngine()
{
	return stateEngine;
}

GraphicEngine* EngineManager::GetGraphicEngine()
{
	return graphicEngine;
}
