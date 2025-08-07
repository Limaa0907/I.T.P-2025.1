#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int soma = 0;

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        int digito = n % 10;
        soma = soma + digito;
        n = n / 10;
    }

    cout << soma << endl;
    return 0;
}
