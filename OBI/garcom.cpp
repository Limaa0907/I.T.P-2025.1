#include <bits/stdc++.h>

int main (){
    int n;
    std::cin >> n;

    int array [n][2];
    int coposquebrados = 0;
    
    for (int j = 0; j < n; j++){
        for (int i = 0; i < 2; i++){
            std::cin >> array [j][i];
        }
    }

    for (int j = 0; j < n; j++){
        for (int i = 0; i < 1; i++){
            if (array [j][i] > array[j][i+1]){
                coposquebrados += array[j][1];
            }
        }
    }
    
    std::cout << coposquebrados;

    return 0;
}