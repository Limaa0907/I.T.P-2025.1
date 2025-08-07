#include <iostream>

int fibonacci (int n);

int main (){
    int n;
    int resultado;
    std::cin >> n;
    resultado = fibonacci (n);
    std::cout << resultado << std::endl;



    return 0;
}

int fibonacci (int n){
    if (n <= 1){
        return n;
    }
    else {
        return n + fibonacci (n-1);
    }
}