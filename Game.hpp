#pragma once
#include "Managers/Graphic_Manager.hpp"
#include "Entities/Characters/Player.hpp"

class Character;

class Game
/*Classe responsável pela mecânica geral do jogo*/
{
    private:
        Player* pBloco;
        Graphic_Manager* pGM;
        
    public:
/*CONSTRUCTORS & DESTRUCTORS*/
        Game();
        ~Game();

/*SETTERS & GETTERS*/

/*METHODS*/
        void executar();
};