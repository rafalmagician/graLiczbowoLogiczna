#include <iostream>
#include <cstdlib>
using namespace std;
#include "game.h"
#include "poziomLatwy.h"
#include "poziomSredni.h"
#include "poziomTrudny.h"

Game::Game(int w){
    wybor = w;
}
Game::~Game(){};
void Game::_game(int wybor){
    switch(wybor){
        case 1:{
            PoziomLatwy pl1;
                pl1._poziomLatwy();
        break;
        }
        case 2:{
            PoziomSredni ps1;
                ps1._poziomSredni();
        break;
        }
        case 3:{
            PoziomTrudny pt1;
                pt1._poziomTrudny();
        break;
        }
        default:{
            cout<<"Brak pozycji w menu..."<<endl;
        }
    }
}
