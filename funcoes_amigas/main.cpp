#include <iostream>
using namespace std;

#include "Relogio.h"

int main(){
    Relogio r;
    r.setHora(12,0,0);
    r.printHora();
    alteraHMS(r);
    r.printHora();

    return 0;
}