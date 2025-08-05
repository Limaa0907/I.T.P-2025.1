#include <iostream>

/*Implementar uma função que recebe a e b como entradas e retorna MDC(a,b) e também s e t, 
de modo que s e t satisfazem a identidade de Bézout MDC(a,b)=sa+tb. Seu programa deve printar no 
terminal o passo a passo das operações até chegar no MDC.*/

int funcbeazout(int a, int b);

int main() {
    int valor1;
    std::cout << "Insira o primeiro valor: ";
    std::cin >> valor1; //Inserção dos valores
    int valor2;
    std::cout << "Insira o segundo valor: ";
    std::cin >> valor2;
    int resultado;

    resultado = funcbeazout(valor1, valor2);    //Chama a função

    std::cout << "O MDC(" << valor1 << "," << valor2 << ") eh: " << resultado << std::endl;

    return 0;
}

int funcbeazout(int valor1, int valor2) {
    int r1 = valor1; //Valores sucessivos do algoritmo de euclides
    int r2 = valor2;
    int s1 = 1; //Coeficientes associados a r1 e r2: s e t
    int s2 = 0;
    int t1 = 0;
    int t2 = 1;

    std::cout << "q" << "   " << "r1" << "   " << "r2" << "   " << "r" << "   " << "s" << "   " << "t" << std::endl;    //Alinhar cada termo

    while (r2 != 0) {   //Condição de parada do algoritmo estendido de Euclides
        int q = r1 / r2;    //Realiza a divisão para encontrar r
        int r = r1 - q * r2;    //Caclula o r da próxima linha
        int s = s1 - q * s2;    //Caclula o s e o t da próxima linha de a e b, respectivamente
        int t = t1 - q * t2;    

        std::cout << q << "   " << r1 << "   " << r2 << "   " << r << "   " << s << "   " << t << std::endl;

        r1 = r2;    //Atualiza os valores de cada elemento
        r2 = r;
        s1 = s2;
        s2 = s;
        t1 = t2;
        t2 = t;
    }

    std::cout << "Coeficientes de Bezout sao: " << s1 << " e " << t1 << std::endl;  //Valores finais de s e t

    return r1;
}
