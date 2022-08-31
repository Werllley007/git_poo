#include <iomanip>
using namespace std;

#include "numeroTelefone.h"

ostream &operator << (ostream &output, const numeroTelefone &numero){
    output << "(" << numero.DDD << ")" << numero.inicio << "-" << numero.fim;
    return output;
}

istream &operator >> (istream &input, numeroTelefone &numero){
    input.ignore();
    input >> setw(2) >> numero.DDD;
    input.ignore(2);
    input >> setw(4) >> numero.inicio;
    input.ignore();
    input >> setw(4) >> numero.fim;
    return input;
}

void numeroTelefone::operator*(numeroTelefone ladoDireito){
    DDD = ladoDireito.DDD;
    inicio = ladoDireito.inicio;
    fim = ladoDireito.fim;
}






