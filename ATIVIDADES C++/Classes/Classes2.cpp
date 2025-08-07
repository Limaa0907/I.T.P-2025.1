#include <iostream>

class Elevador{
    private:
        int andar_atual;
        int total_de_andares;
        int capacidade_do_elevador;
        int quantidade_de_pessoas;
    public:
        Elevador(){
            andar_atual = 0;
            total_de_andares = 0;
            capacidade_do_elevador = 0;
            quantidade_de_pessoas = 0; 
        }

        int _getAndarAtual(){
            return andar_atual;
        }
        int _getTotalAndares(){
            return total_de_andares;
        }
        int _getCapacidadeElevador(){
            return capacidade_do_elevador;
        }
        int _getQuantidadePessoas(){
            return quantidade_de_pessoas;
        }

        void _inicializaElevador(int capacity, int floors){
            capacidade_do_elevador = capacity;
            total_de_andares = floors;
            andar_atual = 0;
            quantidade_de_pessoas = 0;

        }
        void _entraElevador(){
            if(quantidade_de_pessoas < capacidade_do_elevador){
                quantidade_de_pessoas++;
            }
            else {
                std::cout << "O elevador esta cheio" << std::endl;
            }
        }
        void _saiElevador(){
            if(quantidade_de_pessoas > 0){
                quantidade_de_pessoas--;
            }
            else {
                std::cout << "O elevador ja esta vazio" << std::endl;
            }
        }
        void _sobeElevador(){
            if(andar_atual < total_de_andares){
                andar_atual++;
            }
            else {
                std::cout << "O elevador ja esta no terraco" << std::endl;
            }
        }
        void _desceElevador(){
            if(andar_atual > 0){
                andar_atual--;
            }
            else {
                std::cout << "O elevador ja esta no terreo" << std::endl;
            } 
        }

};

int main (){
    Elevador elevator;

    elevator._inicializaElevador(7, 23);
    elevator._entraElevador();
    elevator._entraElevador();
    elevator._sobeElevador();
    elevator._sobeElevador();
    elevator._saiElevador();

    std::cout << "O andar atual eh: " << elevator._getAndarAtual() << std::endl;
    std::cout << "Tem " << elevator._getQuantidadePessoas() << " pessoa(s) no elevador" << std::endl;

    return 0;
}