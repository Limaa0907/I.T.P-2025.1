#include <iostream>

int potencia (int b, int e);

int main (){
    int b;
    int e;
    std::cin >> b;
    std::cin >> e;
    int resultado;
    resultado = potencia (b,e);
    std::cout << resultado << std::endl;

    return 0;
}

int potencia (int b, int e){
    if (e == 0){
        return 1;
    }
    else {
        return b * potencia (b, e-1);
    }
}