#include <iostream>

/*Implementar uma função que calcula todos os primos dentro de 
um intervalo de inteiros. Ex: primos entre 2 e 10 são 2, 3, 5, 7.*/

void funcprimos (int valor1, int valor2);

int main (){
    int valor1;
    int valor2;
    std::cout << "Digite os valores que deseja calcular os primos entre eles: " << std::endl;
    std::cin >> valor1 >> valor2;   //Inserção dos valores

    funcprimos(valor1, valor2); //Chama a função

    return 0;
}

void funcprimos (int valor1, int valor2){
    if (valor1 < valor2){ //Caso 1
        std::cout << "Os primos entre " << valor1 << " e " << valor2 << " sao: ";
        for (int i = valor1; i <= valor2; i++){
            if (i > 1){
                bool primo = true;  
                for (int j = i-1; j > 1; j--){   
                    if (i % j == 0){
                    primo = false;
                    break;
                    }
                }
                if (primo){
                    std::cout << i << " ";
                }
            }
        }
    }
    else if (valor1 > valor2){ //Caso 2
        std::cout << "Os primos entre" << valor2 << " e " << valor1 << " sao: ";
        for (int i = valor2; i <= valor1; i++){
            if (i > 1){
                bool primo = true;  
                for (int j = i-1; j > 1; j--){   
                    if (i % j == 0){
                    primo = false;
                    break;
                    }
                }
                if (primo){
                    std::cout << i << " ";
                }
            }
        }
    }
    std::cout << std::endl;
}