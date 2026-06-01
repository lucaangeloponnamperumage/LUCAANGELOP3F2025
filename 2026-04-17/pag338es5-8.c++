#include <iostream>
using namespace std;


int main() {
    int scelta;

    do {
        cout << "\n--- MENU ---\n";
        cout << "5. Matrice con 1 sulle due diagonali\n";
        cout << "6. Matrice con 1 nelle righe pari e 0 nelle altre\n";
        cout << "7. Matrice con 1 nelle colonne dispari e 0 nelle altre\n";
        cout << "8. Reparti supermercato: totale vendite e percentuali\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {

            case 5: {
                int N;
                cout << "Inserisci l'ordine della matrice quadrata: ";
                cin >> N;

                int m[100][100];

                // Riempimento matrice:  sulle due diagonali (es 1)
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N; j++) {
                        if (i == j || i + j == N - 1)
                            m[i][j] = 1;
                        else
                            m[i][j] = 0;
                    }
                }

                // Stampa matrice
                cout << "Matrice:\n";
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N; j++) {
                        cout << m[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }

            case 6: {
                int righe, colonne;
                cout << "Inserisci numero righe: ";
                cin >> righe;
                cout << "Inserisci numero colonne: ";
                cin >> colonne;

                int m[100][100];

                // Riempimento matrice: nelle righe pari (es 2)
                for (int i = 0; i < righe; i++) {
                    for (int j = 0; j < colonne; j++) {
                        if (i % 2 == 0)
                            m[i][j] = 1;
                        else
                            m[i][j] = 0;
                    }
                }

                // Stampa matrice
                cout << "Matrice:\n";
                for (int i = 0; i < righe; i++) {
                    for (int j = 0; j < colonne; j++) {
                        cout << m[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }

            case 7: {
                int righe, colonne;
                cout << "Inserisci numero righe: ";
                cin >> righe;
                cout << "Inserisci numero colonne: ";
                cin >> colonne;

                int m[100][100];

                // Riempimento matrice: nelle colonne dispari (es 3)
                for (int i = 0; i < righe; i++) {
                    for (int j = 0; j < colonne; j++) {
                        if (j % 2 != 0)
                            m[i][j] = 1;
                        else
                            m[i][j] = 0;
                    }
                }

                // Stampa matrice
                cout << "Matrice:\n";
                for (int i = 0; i < righe; i++) {
                    for (int j = 0; j < colonne; j++) {
                        cout << m[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }

            case 8: {
                int n;
                cout << "Inserisci il numero di reparti: ";
                cin >> n;

                string reparto[100];
                float vendite[100];
                float totale = 0;

                // Inserimento dati
                for (int i = 0; i < n; i++) {
                    cout << "Nome reparto " << i + 1 << ": ";
                    cin >> reparto[i];
                    cout << "Vendite del reparto " << i + 1 << ": ";
                    cin >> vendite[i];

                    totale += vendite[i];
                }

                // Stampa risultati
                cout << "\nTotale vendite: " << totale << endl;
                cout << "Dati dei reparti:\n";

                for (int i = 0; i < n; i++) {
                    cout << reparto[i] << " - vendite: " << vendite[i]
                         << " - percentuale: " << (vendite[i] * 100) / totale << "%\n";
                }
                break;
            }

            case 0:
                cout << "Programma terminato.\n";
                break;

            default:
                cout << "Scelta non valida.\n";
        }

    } while (scelta != 0);

    return 0;
}