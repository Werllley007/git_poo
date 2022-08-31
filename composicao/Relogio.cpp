#include "Relogio.h"

Relogio::Relogio(int hr=0, int min=0, int seg=0){
    setRelogio(hr, min, seg);
}
void Relogio::setRelogio(int h, int m, int s){
    this->h = h;
    this->m = m;
    this->s = s;
}
void Relogio::printRelogio(){
    cout <<h<<":"<<m<<":"<<s<< endl;
}