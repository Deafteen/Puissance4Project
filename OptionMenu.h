#pragma once
#include "Menu.h"
#include "CloseApplicationObject.h"

class Puissance4;

class OptionMenu: public Menu
{
public:
    OptionMenu(Puissance4*);
    ~OptionMenu(void);

    void start();
    void stop();
private:
    CloseApplicationObject *closeApplicationObject;
};

