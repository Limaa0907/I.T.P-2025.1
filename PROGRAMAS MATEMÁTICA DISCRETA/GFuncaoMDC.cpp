#include <iostream>

/*Implementar uma função que recebe a e b como entradas e calcula o MDC(a,b) entre dois números. 
Seu programa deve printar no terminal o passo a passo das operações até chegar no MDC.*/

int funcmdc (int valor1, int valor2);

int main (){
    int valor1;
    std::cout << "Insira o primeiro valor: ";
    std::cin >> valor1; //Inserção dos valores
    int valor2;
    std::cout << "Insira o segundo valor: ";
    std::cin >> valor2;
    int resultado;

    resultado = funcmdc (valor1, valor2);   //Chama a função
    std::cout << "Logo, o MDC(" << valor1 << "," << valor2 << ")" << " eh: " << resultado << std::endl;

    return 0;
}

int funcmdc (int valor1, int valor2){
    while (valor2 != 0){    //Reduz o valor2 ate resultar a 0
        int resto = valor1 % valor2;    //Calcula o mod
        std::cout << "MDC(" << valor1 << "," << valor2 << ")" << " = " << resto << std::endl;
        valor1 = valor2;    //Troca dos valores para o passo seguinte
        valor2 = resto;
    }
    return valor1;
}