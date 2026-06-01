#include <iostream>
using namespace std;

/*
  Programma che legge N coppie di numeri
  e conta quante coppie hanno i due numeri uguali.
 */

int main() {
    int N;
    int a, b;
    int contatore = 0;


    cout << "Inserisci il numero di coppie: ";
    cin >> N;

  
    for (int i = 1; i <= N; i++) {
        cout << "Inserisci la coppia " << i << ": ";
        cin >> a >> b;

        // Controllo se i due numeri sono uguali
        if (a == b) {
            contatore++;
        }
    }

    
    cout << "Le coppie con numeri uguali sono: "
         << contatore << endl;

    return 0;
}
