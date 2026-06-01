#include <iostream>
#include <string>
using namespace std;

/*
  Programma che legge 3 giornali e le copie vendute.
  Calcola il guadagno con queste tariffe:
  - fino a 200 copie: 0.10 €/copia
  - da 201 a 300:     0.20 €/copia (solo sulle copie oltre 200)
  - oltre 300:        0.30 €/copia (solo sulle copie oltre 300)
 */

// Funzione che calcola il guadagno di un giornale in base alle copie
double calcolaGuadagno(int copie) {
    const double G1 = 0.10; // fino a 200
    const double G2 = 0.20; // 201-299
    const double G3 = 0.30; // oltre 300

    if (copie <= 200) {
        return copie * G1;
    } else if (copie <= 300) {
        return 200 * G1 + (copie - 200) * G2;
    } else {
        return 200 * G1 + 100 * G2 + (copie - 300) * G3;
    }
}

int main() {
    string g1, g2, g3;
    int c1, c2, c3;

    // Input nomi giornali
    cout << "Inserisci i nomi dei 3 giornali: ";
    cin >> g1 >> g2 >> g3;

    // Input copie vendute
    cout << "Inserisci le copie vendute per ogni giornale: ";
    cin >> c1 >> c2 >> c3;

    // Calcolo guadagni e totale
    double totale = calcolaGuadagno(c1) + calcolaGuadagno(c2) + calcolaGuadagno(c3);

    cout << "Il guadagno totale e': " << totale << " euro" << endl;
    return 0;
}
