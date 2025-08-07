#include <iostream>
#include <cstring>
#include <string>

int main (){
    char alfMai [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int num [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    std::string placa;
    std::getline (std::cin, placa);

    bool podeserplaca = true;
    if (placa.length() != 8){
        podeserplaca = false;
    }
    

    for (int i = 0; i < 3; i++){
        bool achou = false;
        for (int j = 0; j < 26; j++){
            if (placa [i] == alfMai [j]){
                achou = true;
                break;
            }
        }
        if (!achou){
            podeserplaca = false;
        }
    }
        
    if (placa [3] != '-'){
        podeserplaca = false;
    }
       

    for (int i = 4; i < 8; i++){
        if (placa [i] < '0' || placa [i] > '9'){
            podeserplaca = false;
            break;
        }   
        
    }

    if (podeserplaca){
        std::cout << "sim";
    }
    else{
        std::cout << "nao";
    }
    return 0;
}

/*Escreva um programa que leia uma string e envie para a saída se essa
string representa uma placa de carro válida ( “sim” ou “não” ). Uma placa
é válida se tiver 8 caracteres sendo os 3 primeiros maiúsculas, seguidos
de um hífen e 4 dígitos numéricos.*/