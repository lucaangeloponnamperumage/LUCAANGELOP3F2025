#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Inserisci un numero: ";
    cin >> numero;

    if (numero >= -5 && numero <= 2) {
        cout << "OK" << endl;
    } else {
        cout << "il dato e fuori dall intervallo" << endl;
    }

    return 0;
}