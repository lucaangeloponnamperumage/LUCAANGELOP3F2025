#include <iostream>
using namespace std;

/*
  Programma che verifica se tre numeri interi
  possono rappresentare i lati di un triangolo.
 */

int main() {
    int n1, n2, n3;

    // Input dei tre numeri
    cout << "Inserisci tre numeri interi: ";
    cin >> n1 >> n2 >> n3;

    /* Condizione di esistenza del triangolo:
     la somma di due lati deve essere maggiore del terzo
    */
    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1) {
        cout << "I tre numeri possono essere le lunghezze dei lati di un triangolo." << endl;
    } else {
        cout << "I tre numeri non possono essere le lunghezze dei lati di un triangolo." << endl;
    }

    return 0;
}
