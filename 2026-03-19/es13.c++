#include <iostream>
using namespace std;

/*
  Converte un numero decimale positivo
  nella sua rappresentazione binaria.
 */

int main() {
    int n;

    cout << "Inserisci un numero intero positivo: ";
    cin >> n;

    int binario[100];
    int i = 0;

    
    if (n == 0) {
        cout << "Binario: 0" << endl;
        return 0;
    }

    // Conversione in binario
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Stampa al contrario
    cout << "Binario: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }

    cout << endl;
    return 0;
}