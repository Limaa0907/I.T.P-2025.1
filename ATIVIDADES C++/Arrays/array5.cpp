#include <iostream>
using namespace std;

int main (){
    int n = 10;
    int timA [n];
    int timB [n];
    double posA [n];
    double posB [n];

    int imp1;
    int imp2;

    for (int i = 0; i < n; i++){
        cin >> timA [i];
    }
    for (int i = 0; i < n; i++){
        cin >> timB [i];
    }
    for (int i = 0; i < n; i++){
        cin >> posA [i];
    }
    for (int i = 0; i < n; i++){
        cin >> posB [i];
    }

    double maiorposB = 0;

    for (int g = 0; g < n; g++){
        if (posB [g] > maiorposB){
            maiorposB = posB [g];
        }
    }
    
    cout << "A: ";
    imp1 = 0;
    for (int h = 0; h < n; h++){
        if (maiorposB < posA [h]){
            cout << timA [h] << " ";
            imp1++;
        }
    }

    if (imp1 == 0){
        cout << "sem impedimentos";
    }

    //QUEBRA

    double menorposA = 0;

    for (int g = 0; g < n; g++){
        if (posA [g] < menorposA){
            menorposA = posA [g];
        }
    }
    
    cout << endl;
    cout << "B: ";
    imp2 = 0;
    for (int p = 0; p < n; p++){
        if (menorposA > posB [p]){
            cout << timB [p] << " ";
            imp2++;
        }
    }

    if (imp2 == 0){
        cout << "sem impedimentos" << endl;
    }

    return 0;
}
      