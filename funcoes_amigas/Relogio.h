#include <iostream>

using namespace std;

class Relogio{    
    friend void alteraHMS(Relogio &r);
    public:
        Relogio();
        Relogio(int, int, int);
        ~Relogio();
        void setHora(int, int, int);
        void printHora();        
    public:
        int h, m, s;
};