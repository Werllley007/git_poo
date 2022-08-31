#include "RelogioComAlarme.h"

RelogioComAlarme::RelogioComAlarme():alarme(10,10,10){
    ligado = false;
    tom = "Bateria";
}

void RelogioComAlarme::setRelogioComAlarme(string musica, bool flag, int h, int m, int s){
    ligado = flag;
    alarme.setRelogio(h, m, s);
    tom = musica;
}

void RelogioComAlarme::printRelogioComAlarme(){
    alarme.printRelogio();
}