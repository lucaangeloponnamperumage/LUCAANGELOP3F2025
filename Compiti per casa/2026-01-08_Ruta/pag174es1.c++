#include <iostream>
using namespace std;

/*
  Programma che calcola circonferenza e area
  dei primi 20 cerchi di raggio intero.
 */

int main() {
    
    const double PI = 3.14;
    double circonferenza, area;

    // Ciclo sui raggi da 1 a 20

    for (int raggio = 1; raggio <= 20; raggio++) {
        circonferenza = 2 * PI * raggio;
        area = PI * raggio * raggio;

        // Output dei risultati

        cout << "Raggio: " << raggio
             << " \n Circonferenza: " << circonferenza
             << " \n Area: " << area << endl;
    }

    return 0;
}
