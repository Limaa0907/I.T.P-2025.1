#include <iostream>
#include <cstdlib>

/*Implementar uma função que retorne o mod entre dois inteiros sem usar a
operação da linguagem que retorne o resto da divisão de dois números.*/

int funcmod (int dividendo, int divisor);

int main (){
    int dividendo;
    int divisor;
    int resultado;
    std::cout << "Digite o dividendo ";
    std::cin >> dividendo; //Inserção dos valores
    std::cout << "Digite o divisor ";
    std::cin >> divisor;

    if (divisor == 0){
        std::cout << "Numero invalido, divisao por 0" << std::endl;  //Condição caso o divisor seja 0
        exit (1);
    }

    resultado = funcmod (dividendo,divisor);
    std::cout << "O resto divisao de " << dividendo << " por " << divisor << " eh: " << resultado << std::endl;
    return 0;
}

int funcmod (int dividendo, int divisor){
    int multiplicador = 1;
    if (dividendo > 0 && divisor > 0){  //Caso 1: ambos os valores sejam positivos
        while (dividendo >= divisor){   //laço que realiza subtrações sucessivas, e o valor que sobrar do dividendo é o resto
            dividendo = dividendo-divisor; 
        }
        return dividendo; 
    }
    else if (dividendo < 0 && divisor > 0){ //Caso 2: o dividendo seja negativo e o divisor positivo
        dividendo = dividendo*(-1); //Dividendo é transformado em postivo
        while (divisor*multiplicador < dividendo){  //Laço que incrementa o multiplicador (quociente) até superar o dividendo
            multiplicador++;
        }
        return divisor*multiplicador - dividendo;
    }
    else if(dividendo > 0 && divisor < 0){  //Caso 3: o dividendo seja positivo e o divisor negativo
        divisor = divisor*(-1); //Divisor é transformado em postivo
        while (dividendo >= divisor){   //laço que realiza subtrações sucessivas, e o valor que sobrar do dividendo é o resto
            dividendo = dividendo-divisor;
        }
        return dividendo;   //Retorna o valor negativo
    }
    else if (dividendo < 0 && divisor < 0){ //Caso 4: ambos os valores sejam negativos
        dividendo = dividendo*(-1); //Dividendo é transformado em postivo
        divisor = divisor*(-1); //Divisor é transformado em postivo
        while (divisor*multiplicador < dividendo){  //Laço que incrementa o multiplicador (quociente) até superar o dividendo
            multiplicador++;
        }
        return divisor*multiplicador - dividendo;
    }
    return 0;
}
