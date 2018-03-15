#include <iostream>
#include <cstdlib>
using namespace std;
#include "class.h"

int Game::_liczby(){
    return (rand()%10)+1;
}
void Game::_game(){
    proby=0;
    n=_liczby();

    do{
        cout<<"Podaj 1 liczbe (0-10): ";
        cin>>x;
        if(x==n){
            cout<<"Wygrywasz!"<<endl;
        }
        else{
            cout<<"Nie udalo sie, sprobuj jeszcze raz..."<<endl;
        }

        proby++;
    }while(x!=n);

    cout<<endl;
    cout<<"N = "<<n<<"\nIlosc prob: "<<proby<<endl;
}
