#include <string>
#include <iostream>

class Pessoa{
    private:
        std::string nome;
        int idade;
        float altura;
    public:
        Pessoa(){
            nome = "";
            idade = 0;
            altura = 0.0;
        }

        void _setNome(std::string name){
            nome = name;
        }
        void _setIdade(int age){
            idade = age;
        }
        void _setAltura(float height){
            altura = height;
        }

        std::string _getNome(){
            return nome;
        }
        int _getIdade(){
            return idade;
        }
        float _getAltura(){
            return altura;
        }

        void _imprimirDados(){
            std::cout << "Seu nome eh: " << nome << std::endl;
            std::cout << "Sua idade eh: " << idade << std::endl;
            std::cout << "Sua altura eh: " << altura << std::endl;
        }
};

int main(){
    Pessoa people1;

    people1._setNome("Isabela");
    people1._setIdade(21);
    people1._setAltura(1.55);

    people1._imprimirDados();

    return 0;
}