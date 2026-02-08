
#include <iostream>
using namespace std;

int main() {
int n;
cout << "Quanti numeri vuoi inserire? ";
cin >> n;

int numeri[n];

for (int i = 0; i < n; i++) {
cout << "Inserisci un numero: ";
cin >> numeri[i];}

int minimo = numeri[0];
int massimo = numeri[0];

for (int i = 1; i < n; i++) {
if (numeri[i] < minimo)
    minimo = numeri[i];
if (numeri[i] > massimo)
    massimo = numeri[i];
    }

int differenza = massimo - minimo;
cout << "La differenza tra massimo e minimo e': " << differenza << endl;

return 0;
}
