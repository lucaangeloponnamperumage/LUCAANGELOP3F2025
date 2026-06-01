#include <iostream>
#include <string>
using namespace std;

struct Iscritto {
    string nome;
    string cognome;
    string telefono;
    float acconto;
    float saldo;
};

struct Agente {
    string nome;
    string indirizzo;
};

void esercizio17() {
    int righe, colonne;
    int m[100][100];

    cout << "Inserisci numero righe: ";
    cin >> righe;
    cout << "Inserisci numero colonne: ";
    cin >> colonne;

    // Inserimento matrice
    cout << "Inserisci gli elementi della matrice:\n";
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cin >> m[i][j];
        }
    }

    // Massimo di ogni riga
    cout << "\nMassimo di ogni riga:\n";
    for (int i = 0; i < righe; i++) {
        int maxRiga = m[i][0];
        for (int j = 1; j < colonne; j++) {
            if (m[i][j] > maxRiga) {
                maxRiga = m[i][j];
            }
        }
        cout << "Riga " << i << ": " << maxRiga << endl;
    }

    // Minimo di ogni colonna
    cout << "\nMinimo di ogni colonna:\n";
    for (int j = 0; j < colonne; j++) {
        int minColonna = m[0][j];
        for (int i = 1; i < righe; i++) {
            if (m[i][j] < minColonna) {
                minColonna = m[i][j];
            }
        }
        cout << "Colonna " << j << ": " << minColonna << endl;
    }

    // Massimo e minimo assoluti
    int massimo = m[0][0];
    int minimo = m[0][0];

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            if (m[i][j] > massimo) {
                massimo = m[i][j];
            }
            if (m[i][j] < minimo) {
                minimo = m[i][j];
            }
        }
    }

    cout << "\nMassimo tra tutti gli elementi: " << massimo << endl;
    cout << "Minimo tra tutti gli elementi: " << minimo << endl;
}

void esercizio18() {
    int n;
    string nome[100];
    float voto[100];

    cout << "Inserisci il numero di studenti: ";
    cin >> n;

    // Inserimento dati
    for (int i = 0; i < n; i++) {
        cout << "Nome studente " << i + 1 << ": ";
        cin >> nome[i];
        cout << "Voto: ";
        cin >> voto[i];
    }

    float somma = 0;
    int presenti = 0;
    int assenti = 0;
    float votoMax = -1;
    string nomeMax = "";

    // Calcoli principali
    for (int i = 0; i < n; i++) {
        if (voto[i] == 0) {
            assenti++;
        } else {
            somma += voto[i];
            presenti++;

            if (voto[i] > votoMax) {
                votoMax = voto[i];
                nomeMax = nome[i];
            }
        }
    }

    // Media dei presenti
    if (presenti > 0) {
        cout << "\nMedia dei voti (senza assenti): " << somma / presenti << endl;
        cout << "Studente con voto massimo: " << nomeMax << endl;
    } else {
        cout << "\nNessun voto valido presente." << endl;
    }

    // Elenco insufficienti
    cout << "Studenti insufficienti:\n";
    for (int i = 0; i < n; i++) {
        if (voto[i] > 0 && voto[i] < 6) {
            cout << nome[i] << " - " << voto[i] << endl;
        }
    }

    // Percentuale assenti
    cout << "Percentuale studenti assenti: " << (assenti * 100.0) / n << "%" << endl;
}

void esercizio19() {
    int n;
    Iscritto iscritti[100];

    cout << "Inserisci il numero di iscritti: ";
    cin >> n;

    // Inserimento dati iniziali
    for (int i = 0; i < n; i++) {
        cout << "\nIscritto " << i + 1 << endl;
        cout << "Nome: ";
        cin >> iscritti[i].nome;
        cout << "Cognome: ";
        cin >> iscritti[i].cognome;
        cout << "Telefono: ";
        cin >> iscritti[i].telefono;
        cout << "Acconto versato: ";
        cin >> iscritti[i].acconto;
        cout << "Saldo versato: ";
        cin >> iscritti[i].saldo;
    }

    int scelta;
    do {
        cout << "\n--- MENU ESERCIZIO 19 ---\n";
        cout << "1. Aggiorna pagamento\n";
        cout << "2. Stampa iscritti che devono ancora versare il saldo\n";
        cout << "0. Torna al menu principale\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1: {
                string cerca;
                cout << "Inserisci il cognome dell'iscritto da aggiornare: ";
                cin >> cerca;

                bool trovato = false;
                for (int i = 0; i < n; i++) {
                    if (iscritti[i].cognome == cerca) {
                        float nuovoAcconto, nuovoSaldo;
                        cout << "Nuovo importo acconto: ";
                        cin >> nuovoAcconto;
                        cout << "Nuovo importo saldo: ";
                        cin >> nuovoSaldo;

                        iscritti[i].acconto += nuovoAcconto;
                        iscritti[i].saldo += nuovoSaldo;
                        trovato = true;
                    }
                }

                if (!trovato) {
                    cout << "Iscritto non trovato.\n";
                }
                break;
            }

            case 2: {
                cout << "Iscritti che devono ancora versare il saldo:\n";
                for (int i = 0; i < n; i++) {
                    if (iscritti[i].saldo == 0) {
                        cout << iscritti[i].nome << " " << iscritti[i].cognome << endl;
                    }
                }
                break;
            }

            case 0:
                break;

            default:
                cout << "Scelta non valida.\n";
        }

    } while (scelta != 0);
}

void stampaDatiAgente(Agente agenti[], float fatturato[][12], int n) {
    for (int i = 0; i < n; i++) {
        float totale = 0;
        for (int j = 0; j < 12; j++) {
            totale += fatturato[i][j];
        }

        cout << agenti[i].nome << " - "
             << agenti[i].indirizzo << " - "
             << "Fatturato annuo: " << totale << endl;
    }
}

void agenteMigliore(Agente agenti[], float fatturato[][12], int n) {
    float maxTotale = -1;
    int posMax = 0;

    for (int i = 0; i < n; i++) {
        float totale = 0;
        for (int j = 0; j < 12; j++) {
            totale += fatturato[i][j];
        }

        if (totale > maxTotale) {
            maxTotale = totale;
            posMax = i;
        }
    }

    cout << "Agente con fatturato annuo piu' alto: " << agenti[posMax].nome << endl;
}

void totaleMensile(float fatturato[][12], int n) {
    cout << "Totale fatturato per ogni mese:\n";

    for (int mese = 0; mese < 12; mese++) {
        float totale = 0;
        for (int i = 0; i < n; i++) {
            totale += fatturato[i][mese];
        }
        cout << "Mese " << mese + 1 << ": " << totale << endl;
    }
}

void esercizio20() {
    const int N = 20;
    Agente agenti[N];
    float fatturato[N][12];
    int scelta;

    // Inserimento dati
    for (int i = 0; i < N; i++) {
        cout << "\nAgente " << i + 1 << endl;
        cout << "Nome: ";
        cin >> agenti[i].nome;
        cout << "Indirizzo: ";
        cin >> agenti[i].indirizzo;

        cout << "Inserisci i 12 fatturati mensili:\n";
        for (int j = 0; j < 12; j++) {
            cin >> fatturato[i][j];
        }
    }

    do {
        cout << "\n--- MENU ESERCIZIO 20 ---\n";
        cout << "1. Stampa dati e fatturato annuo di ogni agente\n";
        cout << "2. Stampa agente con fatturato annuo piu' elevato\n";
        cout << "3. Stampa totale fatturato per ogni mese\n";
        cout << "0. Torna al menu principale\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                stampaDatiAgente(agenti, fatturato, N);
                break;
            case 2:
                agenteMigliore(agenti, fatturato, N);
                break;
            case 3:
                totaleMensile(fatturato, N);
                break;
            case 0:
                break;
            default:
                cout << "Scelta non valida.\n";
        }

    } while (scelta != 0);
}

int main() {
    int scelta;

    do {
        cout << "\n--- MENU PRINCIPALE ---\n";
        cout << "17. Matrice: max di ogni riga, min di ogni colonna, max e min assoluti\n";
        cout << "18. Studenti: media, massimo, insufficienti, assenti\n";
        cout << "19. Associazione: aggiornamento pagamenti e iscritti senza saldo\n";
        cout << "20. Agenti: fatturato annuo, migliore agente, totale mensile\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 17:
                esercizio17();
                break;
            case 18:
                esercizio18();
                break;
            case 19:
                esercizio19();
                break;
            case 20:
                esercizio20();
                break;
            case 0:
                cout << "Programma terminato.\n";
                break;
            default:
                cout << "Scelta non valida.\n";
        }

    } while (scelta != 0);

    return 0;
}