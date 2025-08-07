#include <iostream>
#include <cstring>
#include <string>

int main (){
    std::string txt1;
    std::getline (std::cin, txt1);
    std::string txt2;
    std::getline (std::cin, txt2);
    
    std::string multiplex;

    int i = 0;
    int g = 0;
    int tam1 = txt1.length();
    int tam2 = txt2.length();

    for (int h = 0; h < tam1 + tam2; h++) {
        if (i < tam1) {
            multiplex += txt1[i];
            i++;
        }
        if (g < tam2) {
            multiplex += txt2[g];
            g++;
        }
    }

        std::cout << multiplex;
    


    return 0;
}

/*Um multiplexador é dispositivo que combina as sinais de múltiplas
fontes em um único canal de saída. Crie um programa que simula um
multiplexador para dois canais de entrada, representados, cada um, por
uma string.
A saída do multiplexador será os caracteres alternados dos dois canais.
Caso um dos canais de entrada se torne ocioso (sem dados a processar),
o canal de saída será ocupado pelos dados do canal remanescente.
Por exemplo, se os canais de entrada forem representados por “abc” e
“defgh”, a saída será “adbecfgh”.*/


