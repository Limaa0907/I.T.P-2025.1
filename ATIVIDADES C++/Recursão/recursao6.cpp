#include <iostream>
#include <cstring>

int tamanho (char txt [], int tam=0);

int main (){

    char txt[100];
    std::cin >> txt;

    int resultado;
    resultado = tamanho (txt);

    std::cout << resultado << std::endl;

    return 0;
}

int tamanho (char txt [], int tam){
    
    if (txt [tam] == '\0'){
        return 0;
    }
    return 1 + tamanho (txt, tam+1);
}