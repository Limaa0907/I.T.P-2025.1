#include <bits/stdc++.h>

bool saocolegas (int a, int b);
int somadivisores (int x);


int main (){
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;
    int resultado = saocolegas (a,b);

    if (resultado){
        std::cout << "S" << std::endl;
    }
    else {
        std::cout << "N" << std::endl;
    }

    return 0;
}

bool saocolegas (int a, int b){
    int divA = somadivisores (a);
    int divB = somadivisores (b);

    if ((abs(divA - b) <= 2) && (abs(divB - a) <= 2)){
        return true;
    }
    else {
        return false;
    }
}

int somadivisores (int x){
    int divisorX= 0;
     for (int i = 1; i < x; i++){
        if (x%i == 0){
            divisorX += i;
        }
    }
    return divisorX;
}


