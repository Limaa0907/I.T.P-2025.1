#include <iostream>

int main (){
    int amigos;
    std::cin >> amigos;

    int matriz[amigos][2];
    for (int i = 0; i < amigos; i++){
        for (int j = 0; j < 2; j++){
            std::cin >> matriz[i][j];
        }
    }

    int ganhador;
    std::cin >> ganhador;

    int aposta = 0;
    for (int i = 0; i < amigos; i++){
        aposta += matriz[i][0];
    }

    int bebidas = aposta / 10;
    int premiacao = aposta - bebidas;

    int ganhos [100] = {0};
    int somadosganhos = 0;

    for (int i = 0; i < amigos; i++){
        if (matriz [i][1] == ganhador){
            somadosganhos += matriz[i][0];
        }
    }

    int divisaodosganhos = 0;
    if (somadosganhos > 0) {
        for (int i = 0; i < amigos; i++) {
            if (matriz[i][1] == ganhador) {
                ganhos[i] = (matriz[i][0] * premiacao) / somadosganhos;
                divisaodosganhos += ganhos[i];
            }
        }
    } else {
        for (int i = 0; i < amigos; i++) {
            ganhos[i] = (matriz[i][0] * premiacao) / aposta;
            divisaodosganhos += ganhos[i];
        }
    }

    bebidas += premiacao - divisaodosganhos;

    std::cout << "Total: R$ " << aposta << std::endl;
    for (int i = 0; i < amigos; i++){
        if (ganhos[i] > 0){
            std::cout << "Apostador " << i+1 << ": R$ " << ganhos[i] << std::endl;
        }
    }
    std::cout << "Bebidas e petiscos: R$ " << bebidas << std::endl;
    return 0;
}