#include <iostream>
using namespace std;

/*
  Programma che legge N coppie di numeri
  e determina la coppia con la media maggiore.
 */

int main() {
    int N;
    float a, b;
    float media, maxMedia;
    int indiceMax = 1;

    // Input numero di coppie
    cout << "Inserisci il numero di coppie: ";
    cin >> N;

    // Prima coppia
    cout << "Inserisci la coppia 1: ";
    cin >> a >> b;
    maxMedia = (a + b) / 2;

    // Coppie successive
    for (int i = 2; i <= N; i++) {
        cout << "Inserisci la coppia " << i << ": ";
        cin >> a >> b;
        media = (a + b) / 2;

        if (media > maxMedia) {
            maxMedia = media;
            indiceMax = i;
        }
    }

    
    cout << "La coppia con la media maggiore e' la numero "
         << indiceMax << " con media " << maxMedia << endl;

    return 0;
}
