#include <bits/stdc++.h>

const int MAX_n = 500;

int main (){
    int n;
    std::cin >> n;

    int seq[n];
    for (int i = 0; i < n; i++){
        std::cin >> seq[i];
    }

    int numcirc = 0;
    int comecomax = 0;

    for (int i = 0; i < n; i++){
        int n1 = -1;
        int n2 = -1;
        int tamanho = 0;

        for (int j = i; j < n; j++){
            int  atual = seq[j];

            if (n1 == -1 || atual == n1){
                n1 = atual;
            }
            else if (n2 == -1 || atual == n2){
                n2 = atual;
            }
            else {
                break;
            }
            tamanho++;

            if (tamanho > numcirc){
                numcirc = tamanho;
            }
        }
    }

    std::cout << numcirc << std::endl;

    return 0;
}