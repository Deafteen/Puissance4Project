#pragma once
#include "Curseur.h"

class EngineManager;

class CurseurRulesMenu : public Curseur
{
public:
    CurseurRulesMenu(EngineManager*);
    ~CurseurRulesMenu(void);

    virtual void compute();
    virtual void display();
};

