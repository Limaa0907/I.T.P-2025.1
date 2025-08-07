#include <iostream>

int main (){
    int n;
    std::cin >> n;
    int seq[n];
    for (int i = 0; i < n; i++){
        std::cin >> seq[i];
    }

    int cont = 0;

    for (int i = 1; i <= n; i++){
        bool achou = false;
        for (int j = 0; j < n; j++){
            if (seq [j] == i){
                achou = true;
            }
        }
        if (achou){
            cont++;
        }
    }

    if (cont == n){
        std::cout << "sim";
    }
    else {
        std::cout << "não";
    }


    return 0;
}