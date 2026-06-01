#include <iostream>
using namespace std;

/*
  Programma che calcola il costo di un soggiorno
  in base alle settimane e all'eventuale richiesta
  di lenzuola extra.
 */

void soggiorno() {
    const int QUOTA_FISSA = 100;
    const int COSTO_1_SETTIMANA = 600;
    const int COSTO_2_SETTIMANE = 1100;
    const int COSTO_LENZUOLA = 20;

    int settimane, lenzuola;
    int costo_totale;

    cout << "Quante settimane vuoi soggiornare? ";
    cin >> settimane;
    cout << "Vuoi delle lenzuola extra (1=si, 0=no)? ";
    cin >> lenzuola;

    // Calcolo costo base
    if (settimane == 2)
        costo_totale = QUOTA_FISSA + COSTO_2_SETTIMANE;
    else
        costo_totale = QUOTA_FISSA + COSTO_1_SETTIMANA;

    // Supplemento lenzuola
    if (lenzuola == 1)
        costo_totale += COSTO_LENZUOLA * settimane;

    cout << "Il costo totale del soggiorno e' di: "
         << costo_totale << " euro." << endl;
}

int main() {
    soggiorno();
    return 0;
}
