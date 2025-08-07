#include <iostream>

int fatorial (int num);

int main(){
    int resultado;
    int num;
    std::cin >> num;
    resultado = fatorial(num);
    std::cout << resultado<< std::endl;


    return 0;
}

int fatorial(int num){
    if (num == 0){
        return 1;
    }
    if (num == 1){
        return 1;
    }
    else{
        return num * fatorial(num-1);
    }
}
