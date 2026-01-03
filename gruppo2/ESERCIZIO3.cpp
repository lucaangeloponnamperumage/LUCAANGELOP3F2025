
#include <iostream>
using namespace std;

int main() {
float limite;
float t1, t2, t3;
float media;

cout << "Inserisci il valore limite di accensione: ";
cin >> limite;

cout << "Inserisci le tre temperature registrate: ";
cin >> t1 >> t2 >> t3;

media = (t1 + t2 + t3) / 3;

cout << "La temperatura media e': " << media << endl;

if (media < limite) {
cout << "Il riscaldamento verra' acceso." << endl;
} else {
cout << "Il riscaldamento NON verra' acceso." << endl;
}

return 0;
}
