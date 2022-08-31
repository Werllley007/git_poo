#include <iostream>
using namespace std;

class Teste{
    public:
        Teste(int = 0);
        void print() const;

        int getX();
        void setX(int x);
    private:
        int x;
};