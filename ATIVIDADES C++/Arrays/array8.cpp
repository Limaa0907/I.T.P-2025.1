#include <iostream>

int main (){
    int n;
    std::cin >> n;
    int ponte [n];
    for (int i = 0; i < n; i++){
        std::cin >> ponte [i];
    }

    int maior = ponte [0];
    int contesq;
    int contdir;

    for (int i = 1; i < n; i++) {
        if (ponte[i] > maior) {
            maior = ponte[i];
        }
    }
    
    for (int i = n-1; i >= 0; i--){
        if (ponte [i] == maior){
            contdir = i;
            break;
        }
    }
    for (int i = 0; i < n; i++){
        if (ponte [i] == maior){
            contesq = i;
            break;
        }
    }

    std::cout << contdir - contesq - 1 << std::endl;
    return 0;
}