#include "Relogio.h"

//Relogio::Relogio(int hr = 0, int min = 0, int seg = 0){  setHora(hr, min, seg); }
Relogio::Relogio(){}
Relogio::Relogio(int h, int m, int s):h(h),m(m),s(s){}
Relogio::~Relogio(){}

void Relogio::setHora(int h, int m, int s){
    this->h = h;
    this->m = m;
    this->s = s;
}

void Relogio::printHora(){
    cout <<h<<":"<<m<<":"<<s<< endl;
}

void alteraHora(Relogio& r){
    //r.setHora(10,10,10);
    r.h = 10;
    r.m = 10;
    r.s = 10;
}