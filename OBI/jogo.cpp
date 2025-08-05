#include <bits/stdc++.h>

int vizinhas (matriz[][]);

int main (){
    int n;
    std::cin >> n;
    int passos;
    std::cin >> passos;
    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> matriz [i][j];
        }
    }

    for (int w = 0; w < q; w++){ 
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if ((matriz [i][j] == '0') && (matriz [i+1][j] != '0') && (matriz [i][j+1] != '0') && (matriz [i+1][j+1] != '0')){
                    matriz [i][j] = '1';
                }
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << matriz [i][j] << " ";
        }
        std::cout << endl;
    }

    return 0;
}

int vizinhas (matriz[][]){
    int vizinhasvivas = 0;
    int vizinhasmortas = 0;

    if ()




}