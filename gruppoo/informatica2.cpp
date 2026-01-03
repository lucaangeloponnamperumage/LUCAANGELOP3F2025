
#include <iostream>
using namespace std;

int main() {
    int hentrata, mentrata;
    int huscita, muscita;
    int minutientrata, minutiuscita;
    int durataminuti;
    int ore;
    int costo;

    cout << "Inserisci ora e minuti di entrata (es. 9 30): ";
    cin >> hentrata >> mentrata;

    cout << "Inserisci ora e minuti di uscita (es. 12 10): ";
    cin >> huscita >> muscita;

    minutientrata = hentrata * 60 + mentrata;
    minutiuscita = huscita * 60 + muscita;

    durataminuti = minutiuscita - minutientrata;

    ore = durataminuti / 60;
    if (durataminuti % 60 != 0) {
        ore++;
    }

    if (ore <= 1) {
        costo = 2;
    } else {
        costo = 2 + (ore - 1);
    }

    cout << "\n--- SCONTRINO PARCHEGGIO ---" << endl;
    cout << "Ora di entrata: " << hentrata << ":" << mentrata << endl;
    cout << "Ora di uscita: " << huscita << ":" << muscita << endl;
    cout << "Durata sosta: " << ore << " ore" << endl;
    cout << "Costo totale: " << costo << " euro" << endl;

    return 0;
}
