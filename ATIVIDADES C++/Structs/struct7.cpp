#include <iostream>

struct pessoas {
    std::string nome;
    double peso;
};
double media (pessoas array[], int tam){
    int somapeso = 0;
    for (int i = 0; i < tam; i++){
        somapeso += array[i].peso;
    }
    return somapeso/tam;
}

int main (){
    int n;
    std::cout << "Diga quantas pessoas estao na sua clinica:" << std::endl;
    std::cin >> n;
    pessoas nutricao[n];
    for (int i = 0; i < n; i++){
        std::cout << "Insira o nome e peso da " << i+1 << " pessoa: " << std::endl;
        std::cin >> nutricao[i].nome; 
        std::cin >> nutricao[i].peso;
    }
    int resultado;
    resultado = media(nutricao, n);
    std::cout << "A media dos pesos eh: " << resultado << std::endl;
}