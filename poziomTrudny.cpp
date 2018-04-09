#include <iostream>
#include <cstdlib>
using namespace std;
#include "poziomTrudny.h"
#include "randomNumber.h"

PoziomTrudny::PoziomTrudny(int pp,int aa,int bb){
    proby = pp;
    a = aa;
    b = bb;
}
PoziomTrudny::~PoziomTrudny(){};
void PoziomTrudny::_poziomTrudny(){
    los = _randomNumber(a,b);

    cout<<"Cyfry: 1 - 15"<<endl;
    cout<<"Wybrales poziom trudny. Masz 5 strzaly. POWODZENIA!!!"<<endl;

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

