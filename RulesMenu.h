#pragma once
#include "Menu.h"
#include "CloseApplicationObject.h"

class Puissance4;

class RulesMenu : public Menu
{
public:
    RulesMenu(Puissance4*);
    ~RulesMenu(void);

    void start();
    void stop();
protected:
    CloseApplicationObject* cao;
};

