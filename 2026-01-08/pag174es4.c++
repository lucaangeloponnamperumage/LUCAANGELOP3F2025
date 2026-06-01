#include <iostream>
using namespace std;

/*
  Programma che chiede un numero massimo di tentativi.
  L'utente inserisce numeri finché ne inserisce uno
  divisibile per 7 oppure finché finiscono i tentativi.
 */

int main() {
    int maxTentativi, numero;

    // Input numero massimo di tentativi
    cout << "Inserisci il numero massimo di tentativi: ";
    cin >> maxTentativi;

    // Ciclo dei tentativi
    for (int i = 1; i <= maxTentativi; i++) {
        cout << "Tentativo " << i << ": inserisci un numero intero: ";
        cin >> numero;

        // Controllo divisibilità per 7
        if (numero % 7 == 0) {
            cout << "Successo: numero divisibile per 7 inserito al tentativo "
                 << i << endl;
            return 0;
        }
    }

    // Se il ciclo termina senza successo
    cout << "Fallimento: nessun numero divisibile per 7 inserito." << endl;

    return 0;
}
