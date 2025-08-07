#include <iostream>

enum valor {
    as, dois, tres, quatro, cinco, seis, sete, oito, nove, dez, valete, dama, rei
};

enum baralho {
    Copas, Espadas, Ouros, Paus
};

struct Carta {
    valor valor1;
    baralho naipe;
};

int main (){
    Carta c = {dama, Ouros};
    
    return 0;
}