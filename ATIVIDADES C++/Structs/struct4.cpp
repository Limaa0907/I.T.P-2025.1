#include <iostream>

/*Implemente uma função que recebe um conjunto de cartas e verifica se
há no mínimo 3 cartas do mesmo naipe em sequência (o ás vem tanto
antes do 2, quanto depois do rei).*/

enum valor {
    as, dois, tres, quatro, cinco, seis, sete, oito, nove, dez, valete, dama, rei
};

enum naipe {
    Copas, Espadas, Ouros, Paus
};

struct Carta {
    valor valor1;
    naipe baralho;
};

struct Cartas {
    int quantidade;
    Carta cartas [52];
};

bool sequencia (Cartas c1){
    if (c1.quantidade < 3){
        return false;
    }
    else{
        for (int i = 0; i < c1.quantidade - 2; i++){
            if (c1.cartas[i].baralho == c1.cartas[i+1].baralho && c1.cartas [i+1].baralho == c1.cartas[i+2].baralho){
                if (c1.cartas[i].valor1 + 1 == c1.cartas[i+1].valor1 && c1.cartas[i+1].valor1 + 1 == c1.cartas[i+2].valor1){
                    return true;
                    break;
                }
            }
        }
    }
}

int main (){
    Carta c = {dama, Ouros};
    
    Cartas c1 = {
        3,
        {{dama, Ouros}, {cinco, Paus}, {as, Copas}}
    };

    std::cout << sequencia (c1) << std::endl;

    return 0;
}