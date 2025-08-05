#include <bits/stdc++.h>

int main(){
    int array [4];

    for (int i = 0; i < 4; i++){
        std::cin >> array [i];
    }

    bool ehcoral = true;


    for (int i = 0; i < 2 ; i++){
        if (array [i] == array[i+2]){
            std::cout << "V" << std::endl;
            ehcoral = true;
            break;
        }
        else {
            ehcoral = false;
        }
    }

    if (ehcoral == false){
        std::cout << "F";
    }
    

    return 0;
}