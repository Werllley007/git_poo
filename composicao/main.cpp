#include <iostream>
using namespace std;
#include "RelogioComAlarme.h"

int main(){
    RelogioComAlarme despertador;
    despertador.setRelogioComAlarme("bomdia acorda", true, 6, 0, 0);
    despertador.printRelogioComAlarme();
    
    return 0;
}