#include <iostream>

int scoredia (int a, int b, int c);
int scorefinal (int pontuacoes []);
char ganhador (int pontA[], int pontB[]);

int main (){
    int pontA[9];
    int pontB[9];

    for (int i = 0; i < 9; i++){
        std::cin >> pontA[i];
    }
    for (int i = 0; i < 9; i++){
        std::cin >> pontB[i];
    }

    char resultado = ganhador (pontA, pontB);
    if (resultado == 'A'){
        std::cout << "A" << std::endl;
    }
    else if (resultado == 'B'){
        std::cout << "B" << std::endl;
    }
    else if (resultado == 'E'){
        std::cout << "empate" << std::endl;
    }

    return 0;
}


int scoredia (int a, int b, int c){
    if ((a <= b && b <= c) || (c <= b && b <= a)) {
        return b;
    }
    else if ((b <= a && a <= c) || (c <= a && a <= b)) {
        return a;
    }
    else if ((a <= c && c <= b) || (b <= c && c <= a)) {
        return c;
    }
    else if (a == b && b == c) {
        return a;
    }
    else if (a == b || a == c) {
        return a;
    }
    else if (b == c) {
        return b;
    }
    else {
        return a; 
    }
}

int scorefinal (int pontuacoes[]){
    int score1 = scoredia(pontuacoes[0], pontuacoes[1], pontuacoes[2]);
    int score2 = scoredia(pontuacoes[3], pontuacoes[4], pontuacoes[5]);
    int score3 = scoredia(pontuacoes[6], pontuacoes[7], pontuacoes[8]);

     if (score1 < score2 && score2 < score3){
        return score2;
    }
    else if (score2 < score3 && score3 < score1){
        return score3;
    }
    else if (score3 < score1 && score1 < score2){
        return score1;
    }
    else if (score1 == score2 && score2 != score3){
        return score1;
    }
    else if (score2 == score3 && score3 != score1){
        return score2;
    }
    else if(score1 == score3 && score3 != score2){
        return score3;
    }
    else if (score1 == score2 && score2 == score3){
        return score1;
    }
}

char ganhador (int pontA[], int pontB[]){
    int ganhouA = scorefinal (pontA);
    int ganhouB = scorefinal (pontB);

    if (ganhouA > ganhouB){
        return 'A';
    }
    else if (ganhouB > ganhouA){
        return 'B';
    }
    else {
        return 'E';
    }
}