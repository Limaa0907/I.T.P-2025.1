#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    int v1 [n];

    for (int i = 0; i < n; i++){
        cin >> v1[i];
    }

    int contesq = 0;
    int contdir = 0;

    for (int g = 0; g < n; g++){
        if (v1[g] == 2){
            break;
        }
        else if (v1[g] == 0){
            contesq += 1;
        }
        else if (v1[g] == 1){
            contesq = 0;
        }
    }

    for (int j = n; j > 0; j--){
        if (v1[j] == 2){
            break;
        }
        else if (v1[j] == 0){
            contdir += 1;
        }
        else if (v1[j] == 1){
            contdir = 0;
        }
    }

    cout << contesq + contdir;

    return 0;
}