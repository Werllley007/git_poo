#include <iostream>
using namespace std;

class Relogio{
    public:
        Relogio(int, int, int);
        void setRelogio(int, int, int);
        void printRelogio();

    private:
        int h, m, s;    
};