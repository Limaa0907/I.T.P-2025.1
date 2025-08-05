#include <iostream>

/*Implementar uma função que retorne o piso de um número de ponto flutuante 
sem usar a operação de truncamento ou arredondamento da linguagem.*/

int piso(float numero);

int main (){
    float numero;
    int resultado;
    std::cout << "Digite o valor que deseja calcular a funcao piso: ";
    std::cin >> numero;  //Inserção do valor
 
    resultado = piso (numero);   //Chama a função
    std::cout << "A funcao piso de " << numero << " eh: " << resultado << std::endl;

    return 0;
}

int piso (float numero){
    int FuncaoPiso = 0; //Variável de retorno

    if (numero >= 0){ //Para valores maiores ou iguais a zero
        while (FuncaoPiso + 1 <= numero){    //Laço que incrementa até a FuncaoPiso, somado com uma unidade, superar o numero inserido
            FuncaoPiso++;
        }
        return FuncaoPiso;
    }
    else {  //Para valores negativos
        while (FuncaoPiso > numero){    //Laço que decrementa até a FuncaoPiso superar negativamente o numero inserido
            FuncaoPiso--;
        }
        return FuncaoPiso;
    }
}


