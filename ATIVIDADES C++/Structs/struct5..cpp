#include <iostream>

struct Aluno {
   int matricula;
   float notas[3];



void insere (int MATRICULA1, float NOTAS1[3]){
    matricula = MATRICULA1;
    for (int i = 0; i < 3; i++){
        notas [i] = NOTAS1 [i];
    }
}

void mostra (){
    std::cout << matricula << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << notas[i] << " ";
    }

}

double funcmedia (){
    float mediaaluno = 0;
    for (int i = 0; i < 3; i++){
        mediaaluno += notas [i];
    }
    return mediaaluno/3.0;
}
};

int main()
{
    Aluno Turma[5];
    float exnotas [3];

    for(int i=0; i< 5; i++){
        std::cout << "Digite as notas do aluno " << i+1 << std::endl;
        for (int j = 0; j < 3; j++) {
            std::cout << "Digite a nota " << j + 1 << ": ";
            std::cin >> exnotas[j];
        }
        Turma[i].insere(i+1, exnotas);

    }
    for (int i = 0; i < 5; i++){
        Turma[i].mostra();
        std::cout << std::endl;
    }

    double media;

    for(int i=0; i< 5; i++)
    {
        media = Turma[i].funcmedia();
        std::cout << "A media do aluno " << i+1 << " foi: " << media << std::endl;

    }
    return 0;
}


