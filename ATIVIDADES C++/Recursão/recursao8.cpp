#include <iostream>

int somatorioateN (int n);

int main (){
    int n;
    std::cin >> n;
    int resultado;
    resultado = somatorioateN (n);
    std::cout << resultado << std::endl;

    return 0;
}

int somatorioateN (int n){
    if (n == 0){
        return 0;
    }
    else {
        return n + somatorioateN (n-1);
    }
}