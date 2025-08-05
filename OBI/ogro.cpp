#include <iostream>

int main (){
    int e;
    std::cin >> e;
    int d;
    std::cin >> d;

    int res1;
    int res2;

    if ((e >= 0 && e <= 5) && (d >= 0 && d <=5) && (e != d)){
        if (e > d){
            res1 = e+d;
            std::cout << res1 << std::endl;
        }
        else if (e < d){
            res2 = 2*(d-e);
            std::cout << res2 << std::endl;
        }
    }


    return 0;
}