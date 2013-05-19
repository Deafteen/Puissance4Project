#include "Puissance4.h"
#include "SelectGameMode.h"
#include "Curseur.h"



SelectGameMode::SelectGameMode(Puissance4* puissance4P){
    puissance4 = puissance4P;
    curseur = NULL;
    grid = NULL;

}

SelectGameMode::~SelectGameMode(void){
}

void SelectGameMode::start(){
    curseur = new Curseur(puissance4->getEngineManager());
    grid = new Grid(puissance4->getEngineManager());

}

void SelectGameMode::stop(){
    delete grid;
    delete curseur;

}
