#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main (){
    int cont = 0;
    string txt;
    getline (cin, txt);
    char palavra [20];
    cin >> palavra;

    for (int i = 0; i < txt.length (); i++){
        int k = 0;
        bool tem = true;
        if (palavra [k] == txt [i]){
            for (int j = 0; j < strlen(palavra); j++){
                if (txt[i + j] != palavra[j]){
                    tem = false;
                    break;
                }    
            }
            if (tem){
                cont++;
            }
            k++;
        }
    }

    cout << cont;

    return 0;
}

/*Escreva um programa que leia um texto (linha podendo ter espaços em
branco), seguido de uma palavra (string sem espaços). Em seguida,
envie para a saída quantas vezes a string apareceu na linha inteira.*/
