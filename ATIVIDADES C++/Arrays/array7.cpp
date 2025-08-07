#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    int v1 [n];
      int aux;

    for (int i = 0; i < n; i++){
        cin >> v1 [i];
    }
     for (int i = 0; i < n; i++){
        cout << v1 [i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n-1; i++){
        for (int g = 1; g < n; g++){
            if (v1 [g-1] > v1 [g]){
              aux = v1 [g-1];
              v1 [g-1] = v1 [g];
              v1 [g] = aux;
            }
        }
        for (int k = 0; k < n; k++){
            cout << v1 [k] << " ";
        }
        cout << endl;
    }

    return 0;
}