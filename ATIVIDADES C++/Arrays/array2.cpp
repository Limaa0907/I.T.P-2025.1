#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	int v1 [n];
	bool h = true;

	for (int i = 0; i < n; i++){
		cin >> v1 [i];
	}
	for (int i = 1; i < n; i++){
		if ((v1 [i] - v1 [i-1])%2 != 0){
			h = false;
			break;
		}
	}
	if (h == true){
		cout << "Legal";
	}
	else {
		cout << "Chato";
	}
	return 0;
}
