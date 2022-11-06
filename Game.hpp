#pragma once
#include "Levels/FirstLevel.hpp"

#define FRAME_RATE 0.01

class Game
/*Classe responsável pela mecânica geral do jogo*/
{
private:
    FirstLevel levelOne;
    Graphic_Manager* pGM;
    
    sf::Clock clock;
    double dt;

public:
/*CONSTRUCTORS & DESTRUCTORS*/
    Game();
    ~Game();

/*SETTERS & GETTERS*/

/*METHODS*/
    //void execMenu ();
    //void execPause ();
    void execLevelOne();
    void execLevelTwo();

    void keyPressedAction (sf::Event event);
};