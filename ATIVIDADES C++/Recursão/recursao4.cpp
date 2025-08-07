#include <iostream>

int somatorio (int tam, int seq []);

int main (){
    int tam;
    std::cin >> tam;
    int resultado;
    int seq [tam];
    for (int i = 0; i < tam; i++){
        std::cin >> seq [i];
    }
    resultado = somatorio (tam, seq);
    std::cout << resultado << std::endl;

    return 0;
}

int somatorio (int tam, int seq []){
    if (tam == 1){
        return seq [0];
    }
    else {
        return seq [tam-1] + somatorio (tam-1, seq);
    }
}