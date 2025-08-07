#include <bits/stdc++.h>

enum operacao {add, sub, mul, divisao, addres, subres, mulres, divres, end, nada};
operacao stringparaop(const std::string& str);

struct entrada{
    operacao x;
    double n1;
    double n2;
};

int main(){
    std::string op_str;
    entrada calculo;
    double resultado = 0;

    while (true){
        std::cin >> op_str;
        calculo.x = stringparaop(op_str);
        if (stringparaop(op_str) == end){
            break;
        }
        if (calculo.x == add || calculo.x == sub || calculo.x == mul || calculo.x == divisao){
            std::cin >> calculo.n1 >> calculo.n2;
        } 
        else if (calculo.x == addres || calculo.x == subres || calculo.x == mulres || calculo.x == divres){
            std::cin >> calculo.n1;
        } 
            if (calculo.x == add){
                resultado += calculo.n1 + calculo.n2;
            }
            if (calculo.x == sub){
                resultado += calculo.n1 - calculo.n2;
            }
            if (calculo.x == mul){
                resultado += calculo.n1 * calculo.n2;
            }
            if (calculo.x == divisao && calculo.n2 != 0){
                resultado += calculo.n1 / calculo.n2;
            }
            if (calculo.x == addres){
                resultado = resultado + calculo.n1;
            }
            if (calculo.x == subres){
                resultado = resultado - calculo.n1;
            }
            if (calculo.x == mulres){
                resultado = resultado * calculo.n1;
            }
            if (calculo.x == divres && calculo.n1 != 0){
                resultado = resultado / calculo.n1;
            }
    }

    std::cout << std::fixed << std::setprecision(2) << resultado << std::endl;

    return 0;
}

operacao stringparaop(const std::string& input){
    if (input == "add"){
        return add;
    }
    else if (input == "sub"){
        return sub;
    }
    else if (input == "mul"){ 
        return mul;
    }
    else if (input == "div"){ 
        return divisao;
    }
    else if (input == "add-res"){ 
        return addres;
    }
    else if (input == "sub-res"){ 
        return subres;
    }
    else if (input == "mul-res"){ 
        return mulres;
    }
    else if (input == "div-res"){
        return divres;
    }
    else if (input == "end"){
        return end;
    }
    else {
        return nada;
    }
}