#include <bits/stdc++.h>

void ronda (int a, int b, int c);

int main (){
    int hora;
    std::cin >> hora;
    int minuto;
    std::cin >> minuto;
    int segundo;
    std::cin >> segundo;

    ronda (hora,minuto,segundo);

    return 0;
}

void ronda (int a, int b, int c){

    int h = a;
    int m = b;
    int s = c;

    for (int i = 1; i <=4; i++){    
        if (i == 1){
            h += 1;
            m += 0;
            s += 0;
        }
        else if (i == 2){
            h += 1;
            m += 10;
            s += 30;
        }
        else if (i == 3){
            h += 2;
            m += 30;
            s += 20;
        }
        else {
            h += 7;
            m += 24;
            s += 15;
        }

        if (s >= 60){
            s -= 60;
            m += 1;
        }   
        if (m >= 60){
            m -= 60;
            h += 1;
        }
        if (h >= 24){
            h -= 24;
        }
        

        std::cout << std::setfill('0') << std::setw(2) << h << ":"
                  << std::setfill('0') << std::setw(2) << m << ":"
                  << std::setfill('0') << std::setw(2) << s << std::endl;
    }
}