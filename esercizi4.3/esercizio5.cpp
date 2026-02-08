
#include <iostream>
using namespace std;

int main() {
int codice;
float prezzo;

int codiceMax = 0;
float prezzoMax = -1;

while (true) {
cout << "Inserisci il codice del prodotto (0 per terminare): ";
cin >> codice;

if (codice == 0)
 break;

cout << "Inserisci il prezzo del prodotto: ";
cin >> prezzo;

if (prezzo > prezzoMax) {
    prezzoMax = prezzo;
    codiceMax = codice;
    }}

if (prezzoMax > 0)
cout << "Il prodotto piu' costoso ha codice " << codiceMax << " e prezzo " << prezzoMax << endl;

else
cout << "Non sono stati inseriti prodotti." << endl;

return 0;
}
