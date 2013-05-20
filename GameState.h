#pragma once
#include "Menu.h"

class Puissance4;

class GameState : public Menu
{
public:
    GameState(Puissance4*);
    ~GameState(void);
};

