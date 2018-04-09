#include <iostream>
#include <cstdlib>
using namespace std;
#include "poziomSredni.h"
#include "randomNumber.h"

PoziomSredni::PoziomSredni(int pp,int aa,int bb){
    proby = pp;
    a = aa;
    b = bb;
}
PoziomSredni::~PoziomSredni(){};
void PoziomSredni::_poziomSredni(){
    los = _randomNumber(a,b);

    cout<<"Cyfry: 1 - 10"<<endl;
    cout<<"Wybrales poziom sredni. Masz 4 strzaly. POWODZENIA!!!"<<endl;

    do{
        cout<<"Strzal -> ";
        cin>>strzal;
        if(strzal==los){
            cout<<"TRAFIENIE!!! Wygrales :)"<<endl;
            exit(0);
        }
        else{
            proby--;
            cout<<"Niestety :( Zostalo: "<<proby<<" prob..."<<endl;
        }
    }while(proby!=0);
}
