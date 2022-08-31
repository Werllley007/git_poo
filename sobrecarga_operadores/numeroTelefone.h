#include <iostream>
#include <string>
using namespace std;

class numeroTelefone{
    friend ostream &operator<<(ostream &, const numeroTelefone &);
    friend istream &operator>>(istream &, numeroTelefone &);

    public:
        void operator*(numeroTelefone);
    private:
        string DDD;
        string inicio;
        string fim;        
};