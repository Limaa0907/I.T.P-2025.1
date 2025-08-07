#include <iostream>

/*Defina um tipo de dado para representar um número fracionário
(numerador/denominador) e implemente uma função que recebe dois
números fracionários e retorna a multiplicação deles, também como
número fracionário.*/

struct fracao{
    int a;
    int b;
};

void resultado (fracao x, fracao y){
    int numerador = x.a * y.a;
    int denominador = x.b * y.b;

    std::cout << numerador << '/' << denominador;
}

int main (){
    resultado ({2,4}, {5, 6});
    std::cout << std::endl;
    return 0;
}