
#include <iostream>
using namespace std;

int main() {
int a, b, cont = 0;

cout << "Inserisci a e b: ";
cin >> a >> b;
cout << "Numeri pari tra " << a << " e " << b << ":\n";

for (int i = a; i <= b; i++) {if (i % 2 == 0) {cout << i << " ";cont++;}}

cout << "Totale numeri pari: " << cont << endl;

return 0;
}
