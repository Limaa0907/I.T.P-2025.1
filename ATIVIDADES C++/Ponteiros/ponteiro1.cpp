#include <iostream>

int main (){
    std::string veiculo = "Carro";
    std::string *pv;
    pv = &veiculo;
    *pv += " Moto";
    std::cout << veiculo << std::endl;


    return 0;
}