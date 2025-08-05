#include <iostream>

/*Implementar uma função que retorne o teto de um número de ponto flutuante 
sem usar a operação de truncamento ou arredondamento da linguagem.*/

int teto (float numero);

int main (){
    float numero;
    int resultado;
    std::cout << "Digite o valor que deseja calcular a funcao teto: ";
    std::cin >> numero;   //Inserção do valor

    resultado = teto (numero);  //Chama a função
    std::cout << "A funcao teto de " << numero << " eh: " << resultado << std::endl;

    return 0;
}

int teto (float numero){
    int FuncaoTeto = 0; //Variável de retorno

    if (numero >= 0){   //Para valores maiores ou iguais a zero
        while (FuncaoTeto < numero){    //Laço que incrementa até a FuncaoTeto superar o numero inserido
            FuncaoTeto++;
        }
        return FuncaoTeto;
    }
    else {
        while (FuncaoTeto > numero){    //Laço que idecrementa até a FuncaoTeto superar negativamente o numero
            FuncaoTeto--;
        }
        if (FuncaoTeto == numero){  //Condição caso o numero inserido o exato
            return FuncaoTeto;
        }
        else {
        return FuncaoTeto + 1;  //Retorna a Função Piso somado com uma unidade
        }
    }
}