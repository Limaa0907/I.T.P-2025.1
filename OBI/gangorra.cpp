#include <bits/stdc++.h>

int main (){
    int p1;
    std::cin >> p1;
    int c1;
    std::cin >> c1;
    int p2;
    std::cin >> p2;
    int c2;
    std::cin >> c2;

    if (p1*c1 == p2*c2){
        std::cout << 0;
    }
    else if (p1*c1 > p2*c2){
        std::cout << -1;
    }
    else {
        std::cout << 1;
    }
    
    return 0;
}