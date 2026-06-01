#include <iostream>
using namespace std;

/*
  Programma che chiede due numeri,
  fa calcolare la somma all'utente
  e verifica se il risultato è corretto.
 */

int main() {
    float n1, n2;
    float risposta, risultato;

    cout << "Inserisci due numeri da sommare: ";
    cin >> n1 >> n2;

    cout << "Fai la somma a mente e inserisci il risultato: ";
    cin >> risposta;

    risultato = n1 + n2;

    // Verifica della risposta
    if (risposta == risultato) {
        cout << "Complimenti, hai fatto bene i calcoli!" << endl;
    } else {
        cout << "Peccato, il risultato corretto era " << risultato << endl;
    }

}
