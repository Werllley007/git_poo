#include <iostream>
#include <string>
using namespace std;
#include "Relogio.h"

class RelogioComAlarme{
    public:
        RelogioComAlarme();
        void setRelogioComAlarme(string, bool, int, int, int);
        void printRelogioComAlarme();
        
    private:
        bool ligado;
        Relogio alarme;
        string tom;
};