#include <iostream>
#include <cstring>
#include <string>

int main (){
    std::string txt;
    std::getline(std::cin, txt);
    int n;
    std::cin >> n;
    
    n = n % 26;
    if (n < 0){
        n += 26;
    }

    for (int i = 0; i < txt.length(); i++){
        char c = txt [i];
        if (c >= 'a' && c <= 'z'){
            c = ((c - 'a' + n) % 26) + 'a';
        }
        else if (c >='A' && c <= 'Z'){
            c = ((c - 'A' + n) % 26) + 'A';
        }

        txt [i] = c;
    }
    
    std::cout << txt << std::endl;

    return 0;
}

/*Escreva um programa que leia um valor inteiro e um texto, e envie para
a saída o texto codificado pela cifra de César (com deslocamento dado
pelo valor inteiro)*/