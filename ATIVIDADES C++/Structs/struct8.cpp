#include <iostream>

/*Um histograma é um tipo de gráfico que representa a distribuição de
frequências de dados. Quando um intervalo contínuo desta distribuição
possui o mesmo valor, dizemos que é um plateau.
Considere a existência de uma constante chamada MAX_SIZE e defina:
○ um tipo de dado para representar um histograma contendo a
quantidade de frequências e seus valores.
○ um tipo de dado para representar os dados de um plateau (índice inicial,
índice final e valor da frequência)
○ implemente uma função que recebe um histograma como parâmetro e
retorna os dados de um plateau
OBS: sempre haverá 1 e apenas 1 plateau!*/

struct histograma {
    int tam;
    int freq [max];
};

struct plateau {
    int indinicial;
    int indfinal;
    int valor;
};

plateau encontrarPlateau(histograma &h){
    plateau num;
    bool achou = false;

    for (int i = 0; i < h.tam - 1; i++) {
        if (h.freq[i] == h.freq[i+1]) {
            num.indinicial = i;
            num.valor = h.freq[i];

            int j = i + 1;
            while (j < h.tam && h.freq[j] == num.valor) {
                j++;
            }

            num.indfinal = j - 1;
            achou = true;
            break;
        }
    }
    return num;
}

int main (){

    return 0;
}