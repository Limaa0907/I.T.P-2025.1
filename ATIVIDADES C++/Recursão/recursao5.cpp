#include <iostream>

bool existe (int num, int seq[], int inicio, int fim);

int main (){
    int num;
    std::cin >> num;
    int tam;
    std::cin >> tam;
    int inicio = 0;
    int fim = tam-1;

    int seq [tam];
    for (int i = 0; i < tam; i++){
        std::cin >> seq [i];
    }
    
    bool resultado;
    resultado = existe (num, seq, inicio, tam);
    
    if (resultado){
        std::cout << "existe" << std::endl;
    }
    else {
        std::cout << "nao existe" << std::endl;
    }

    return 0;
}

bool existe (int num, int seq[], int inicio, int fim){
    int meio;
    meio = (inicio + fim) / 2;    

    if (inicio > fim){
        return false;
    }
    if (seq[meio] == num){
        return true;
    }
    else if (num < seq[meio]){
        return existe (num, seq, inicio, meio-1);
    }
    else if (num > seq [meio]){
        return existe (num, seq, meio+1, fim);
    }
}