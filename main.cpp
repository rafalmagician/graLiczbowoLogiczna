#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#include "game.h"
#include "menu.h"

int main()
{
    srand(time(0));

    int x;
    Menu m1;
    Game g1;

        do{
            m1._menu();
            cout<<endl;
            cout<<"Wybierz pozycje z menu: ";
            cin>>x;

            if((x>0)&&(x<=3)){
                g1._game(x);
            }
        }while(x!=0);

    cout<<"Koniec gry!"<<endl;

    system("pause");
    return 0;
}
