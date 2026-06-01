#include <iostream>
#include <string>
using namespace std;

/*
  Gestisce dati di squadre di calcio:
  nome squadra, serie e punti.
 */

int main() {
    int n;

    cout << "Numero squadre: ";
    cin >> n;

    string squadre[100];
    char serie[100];
    int punti[100];

    
    for (int i = 0; i < n; i++) {
        cout << "Nome squadra: ";
        cin >> squadre[i];
        cout << "Serie (A o B): ";
        cin >> serie[i];
        cout << "Punti: ";
        cin >> punti[i];
    }

    
    cout << "\nSquadre di serie A con i relativi punti:\n";
    for (int i = 0; i < n; i++) {
        if (serie[i] == 'A') {
            cout << squadre[i] << " - " << punti[i] << endl;
        }
    }

    // 2. Costruzione vettore CLASSIF con squadre di serie B
    string classif[100];
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (serie[i] == 'B') {
            classif[k] = squadre[i];
            k++;
        }
    }

    cout << "\nSquadre di serie B:\n";
    for (int i = 0; i < k; i++) {
        cout << classif[i] << endl;
    }

    // 3. Ricerca squadra campione di serie A
    int maxPunti = -1;
    string campione = "";

    for (int i = 0; i < n; i++) {
        if (serie[i] == 'A' && punti[i] > maxPunti) {
            maxPunti = punti[i];
            campione = squadre[i];
        }
    }

    cout << "\nSquadra campione di serie A: " << campione << endl;

    return 0;
}