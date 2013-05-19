#pragma once
#include "State.h"
#include "Curseur.h"
#include "Grid.h"

class Puissance4;

class SelectGameMode : public State
{
private:
    Puissance4* puissance4;
    Curseur* curseur;
    Grid* grid;


public:
    SelectGameMode(Puissance4*);
    ~SelectGameMode(void);

    void start();
    void stop();

};

