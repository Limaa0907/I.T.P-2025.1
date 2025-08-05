#include <iostream>

int main (){
    int paginas;
    std::cin >> paginas;
    int digitalizadas;
    std::cin >> digitalizadas;
    
    int livro[digitalizadas];
    for (int i = 0; i < digitalizadas; i++){
        std::cin >> livro[i];
    }

    for (int i = 1; i <= paginas; i++){
        bool tem = false;
        for (int j = 0; j < digitalizadas; j++){
            if (i == livro[j]){
                tem = true;
                break;
            }
        }
        if (tem == false){
            std::cout << i << " ";
        }
    }
    return 0;
}