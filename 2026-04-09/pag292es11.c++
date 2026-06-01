#include <iostream>
#include <string>
using namespace std;

/*
  Gestisce i dati di N persone:
  cognome, citta', telefono, giorno e mese di nascita.
  Realizza le richieste della traccia usando vettori paralleli.
 */

int main() {
    int N;

    cout << "Inserisci il numero di persone: ";
    cin >> N;

    string cognome[100], citta[100], telefono[100];
    int giorno[100], mese[100];

    // Inserimento dati
    for (int i = 0; i < N; i++) {
        cout << "\nPersona " << i + 1 << endl;

        cout << "Cognome: ";
        cin >> cognome[i];

        cout << "Città di residenza: ";
        cin >> citta[i];

        cout << "Telefono: ";
        cin >> telefono[i];

        cout << "Giorno di nascita: ";
        cin >> giorno[i];

        cout << "Mese di nascita: ";
        cin >> mese[i];
    }

    // 1. Stampa nominativi dei residenti in una citta' nati in agosto
    string cittaRichiesta;
    cout << "\nInserisci una città da cercare: ";
    cin >> cittaRichiesta;

    cout << "Residenti a " << cittaRichiesta << " nati in agosto:" << endl;
    for (int i = 0; i < N; i++) {
        if (citta[i] == cittaRichiesta && mese[i] == 8) {
            cout << cognome[i] << endl;
        }
    }

    // 2. Stampa dati relativi a una persona conoscendo il telefono
    string telRicerca;
    cout << "\nInserisci un numero di telefono da cercare: ";
    cin >> telRicerca;

    for (int i = 0; i < N; i++) {
        if (telefono[i] == telRicerca) {
            cout << "Dati della persona trovata:" << endl;
            cout << "Cognome: " << cognome[i] << endl;
            cout << "Citta': " << citta[i] << endl;
            cout << "Telefono: " << telefono[i] << endl;
            cout << "Data di nascita: " << giorno[i] << "/" << mese[i] << endl;
        }
    }

    // 3. Visualizza il numero telefonico di una persona dato il cognome
    string cognomeRicerca;
    cout << "\nInserisci il cognome da cercare: ";
    cin >> cognomeRicerca;

    for (int i = 0; i < N; i++) {
        if (cognome[i] == cognomeRicerca) {
            cout << "Numero telefonico di " << cognome[i] << ": " << telefono[i] << endl;
        }
    }

    // 4. Auguri di compleanno
    int giornoCorrente, meseCorrente;
    cout << "\nInserisci il giorno corrente: ";
    cin >> giornoCorrente;
    cout << "Inserisci il mese corrente: ";
    cin >> meseCorrente;

    for (int i = 0; i < N; i++) {
        if (giorno[i] == giornoCorrente && mese[i] == meseCorrente) {
            cout << "Buon compleanno a " << cognome[i] << endl;
        }
    }

    return 0;
}