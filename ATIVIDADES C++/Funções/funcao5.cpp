#include <bits/stdc++.h>

int pontuacao (double x, double y, double xant, double yant);
int pontuacaoprincipal (double x, double y);
int pontuacaoeuclidiana (double x1, double y1, double x2, double y2);

int main (){
    double x;
    double xant = 0;
    double y;
    double yant = 0;

    int res = 0;

    for (int i = 0; i < 10; i++){
        std::cin >> x;
        std::cin >> y;
        
        if (i == 0){
            res += pontuacaoprincipal(x,y);
        }
        else {
            res += pontuacao(x,y,xant,yant);
        }
        xant = x;
        yant = y;
    }
    
    std::cout << res << std::endl;

    return 0;
}

int pontuacao(double x, double y, double xant, double yant){
    int pontuacao = pontuacaoprincipal (x,y);  
    int bonus = pontuacaoeuclidiana(x, y, xant, yant);
    
    return pontuacao + bonus;
}

int pontuacaoprincipal (double x, double y){
    double distcentro = sqrt((x*x) + (y*y));

    if (distcentro >= 0 && distcentro <= 1.0){
        return 10;
    }
    else if (distcentro > 1 && distcentro <= 2.0){
        return 6;
    }
    else if (distcentro > 2 && distcentro <= 3.0){
        return 4;
    }
    else {
        return 0;
    }
}

int pontuacaoeuclidiana (double x1, double y1, double x2, double y2){
    double disteuclidiana = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    if (disteuclidiana >= 0 && disteuclidiana <= 1.0){
        return 5;
    }
    else if (disteuclidiana > 1 && disteuclidiana <= 2.0){
        return 3;
    }
    else if (disteuclidiana > 2 && disteuclidiana <= 3.0){
        return 2;
    }
    else {
        return 0;
    }
}