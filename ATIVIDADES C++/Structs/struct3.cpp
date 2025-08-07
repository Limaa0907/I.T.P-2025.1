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

struct Cartas {
    int quantidade
    Carta cartas [54];
};

int main (){
    Carta c = {dama, Ouros};
    
    Cartas c1 = {
        3,
        {{dama, Ouros}, {cinco, Paus}, {as, Copas}}
    };

    return 0;
}