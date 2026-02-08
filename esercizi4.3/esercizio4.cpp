
#include <iostream>
using namespace std;

int main() {
int n;
cout << "Quante persone vuoi inserire? ";
cin >> n;

float peso[n], altezza[n];
float rapporto;
int contatore = 0;

for (int i = 0; i < n; i++) {
    cout << "Inserisci peso della persona " << i + 1 << ": ";
    cin >> peso[i];
    cout << "Inserisci altezza della persona " << i + 1 << ": ";
    cin >> altezza[i];
    }

float k;
cout << "Inserisci il valore k prefissato: ";
cin >> k;

for (int i = 0; i < n; i++) {
    rapporto = peso[i] / altezza[i];
    if (rapporto > k) {
        contatore++;
        }}

cout << "Il numero di persone con rapporto peso/altezza maggiore di " << k << " e': " << contatore << endl;

return 0;
}
