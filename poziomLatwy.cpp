#include <iostream>
#include <cstdlib>
using namespace std;
#include "poziomLatwy.h"
#include "randomNumber.h"

PoziomLatwy::PoziomLatwy(int pp,int aa,int bb){
    proby = pp;
    a = aa;
    b = bb;
}
PoziomLatwy::~PoziomLatwy(){};
void PoziomLatwy::_poziomLatwy(){
    los = _randomNumber(a,b);

    cout<<"Cyfry: 1 - 5"<<endl;
    cout<<"Wybrales poziom latwy. Masz 3 strzaly. POWODZENIA!!!"<<endl;

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
