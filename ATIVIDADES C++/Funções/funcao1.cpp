#include <iostream>

bool primogemeo (int n1);

int main (){
    int a;
    std::cin >> a;

    bool resultado = primogemeo (a);

    if (resultado){
        std::cout << "Numero forma par de gemeos";
    }
    else {
        std::cout << "Numero nao forma par de gemeos";
    }

    return 0;
}

bool primogemeo (int n1){
    bool ehprimo = true;
    int gemeo = n1+2;
    bool ehprimo2 = true;

    if (n1 == 1 || n1%2 == 0){
        ehprimo = false;
    }
    if (n1 == 2){
        ehprimo = true;
    }
    for (int i = 3; i < n1; i++){
        if (n1%i == 0){
            ehprimo = false;
        }
    }

    for (int i = 3; i < gemeo; i++){
        if (gemeo%i == 0){
            return false;
        }
    }

    if (ehprimo){
        if (ehprimo2){
            return true;
    
        }
    }
    else {
        return false;
    }
}