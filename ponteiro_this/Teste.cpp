#include "Teste.h"

Teste::Teste(int value):x(value){ }

void Teste::print() const{
    cout << "x = " << x << endl;

    cout << "this->x : " << this->x << endl;
}

int Teste::getX(){
    return x;
}
void Teste::setX(int x){
    this->x = x;
}