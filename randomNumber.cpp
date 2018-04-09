#include <iostream>
#include <cstdlib>
using namespace std;
#include "randomNumber.h"

int _randomNumber(int a,int b){
    return (rand()%b)+a;
}
