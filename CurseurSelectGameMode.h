#pragma once
#include "Curseur.h"

class EngineManager;

class CurseurSelectGameMode : public Curseur
{
public:
    CurseurSelectGameMode(EngineManager*);
    ~CurseurSelectGameMode(void);

    virtual void compute();
    virtual void display();
};

