#include <iostream>
using namespace std;

#include "Teste.h"

int main(){
    Teste *t = new Teste();
    t->setX(50);

    t->print();

    return 0;
}