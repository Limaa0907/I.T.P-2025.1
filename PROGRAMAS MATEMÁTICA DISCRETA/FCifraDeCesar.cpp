#include <iostream>
#include <cstring>
#include <string>

std::string cifradecesar (std::string texto, int chave);

int main (){
    std::string texto;
    std::cout << "Digite o texto que deseja codificar: ";
    std::getline(std::cin, texto);

    int chave;
    std::cout << "Digite sua chave: ";
    std::cin >> chave;

    std::string CodigoCifrado; 
    CodigoCifrado = cifradecesar (texto, chave);    //Chama a função
    std::cout << "O seu texto criptografado eh: " << CodigoCifrado << std::endl;

    return 0;
}
    
std::string cifradecesar (std::string texto, int chave){
    chave = chave % 26; //Garantir que a chave esteja sempre entre 0 e 25
    if (chave < 0){
        chave += 26;
    }
    for (int i = 0; i < texto.length(); i++){   //Laço para percorrer cada letra do texto
        char caractere = texto[i];
        if (caractere >= 'a' && caractere <= 'z'){  //Condição da letra ser minúscula
            caractere = ((caractere - 'a' + chave) % 26) + 'a'; //Subtrai 'a', para manter entre 0 e 25, mantem o intervalo pelo %26 e depois soma o 'a' de volta
        }
        else if (caractere >='A' && caractere <= 'Z'){    //Condição da letra ser maiúscula
            caractere = ((caractere - 'A' + chave) % 26) + 'A'; //Subtrai 'A', para manter entre 0 e 25, mantem o intervalo pelo %26 e depois soma o 'A' de volta
        }
        texto[i] = caractere;   //Adiciona o caractere para o codigo cifrado
    }
    return texto;
}