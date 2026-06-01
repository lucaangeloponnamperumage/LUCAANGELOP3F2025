#include <iostream>
#include <string>
using namespace std;

/*
  Gestisce i dati di N film:
  titolo, regista e incasso.
 */

int main() {
    int n;

    cout << "Numero film: ";
    cin >> n;

    string titolo[100], regista[100];
    float incasso[100];

    // Inserimento dati
    for (int i = 0; i < n; i++) {
        cout << "Titolo film: ";
        cin >> titolo[i];
        cout << "Regista: ";
        cin >> regista[i];
        cout << "Incasso: ";
        cin >> incasso[i];
    }

    // 1. Stampa film di un X regista
    string nomeRegista;
    cout << "\nInserisci il regista da cercare: ";
    cin >> nomeRegista;

    cout << "Film del regista " << nomeRegista << ":\n";
    for (int i = 0; i < n; i++) {
        if (regista[i] == nomeRegista) {
            cout << titolo[i] << endl;
        }
    }

    // 2. Film con maggiore incasso
    float maxIncasso = incasso[0];
    int posMax = 0;

    for (int i = 1; i < n; i++) {
        if (incasso[i] > maxIncasso) {
            maxIncasso = incasso[i];
            posMax = i;
        }
    }

    cout << "\nFilm con maggiore incasso:\n";
    cout << titolo[posMax] << " - " << regista[posMax] << endl;

    // 3. Media incassi di un regista
    float somma = 0;
    int cont = 0;

    for (int i = 0; i < n; i++) {
        if (regista[i] == nomeRegista) {
            somma += incasso[i];
            cont++;
        }
    }

    if (cont > 0) {
        cout << "Media incassi dei film di " << nomeRegista << ": " << somma / cont << endl;
    } else {
        cout << "Nessun film trovato per questo regista." << endl;
    }

    return 0;
}