#include <iostream>
using namespace std;
int main() {
	int n;
    cin >> n;

    int v1[n];

    for (int i = 0; i < n; i++){
        cin >> v1[i];
    }

    int contesq = 0;
    int contdir = 0;

    
        for (int g = 0; g < n; g++){
            if(v1[g] == 2){
                break;
            }
            contesq += v1[g];
        }
        
        for (int j = n -1; j > 0; j--){
            if(v1[j] == 2){
                break;
            }
            contdir += v1[j];
        }

        
    
    if (contesq > contdir){
        cout << "direita";
    }
    else if (contdir > contesq){
        cout << "esquerda";
    }
    else {
        cout << "tanto faz";
    }



	return 0;
}

