#include <iostream>

int somavetor (int vetor [], int tam);

int main (){
    int tam;
    std::cin >> tam;
    int vetor [tam];
    for (int i = 0; i < tam; i++){
        std::cin >> vetor [i];
    }
    int resultado = somavetor (vetor, tam);
    std::cout << resultado << std::endl;



    return 0;
}

int somavetor (int vetor [], int tam){
    if (tam == 0){
        return 0;
    }
    else {
        return vetor [tam-1] + somavetor (vetor, tam-1);
    }
}