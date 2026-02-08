
#include <iostream>
using namespace std;

int main() {
int n;
cout << "Quanti numeri vuoi inserire? ";
cin >> n;

int numeri[n];
for (int i = 0; i < n; i++) {
    cout << "Inserisci il numero " << i + 1 << ": ";
    cin >> numeri[i];}

int k;
cout << "Inserisci il numero k: ";
cin >> k;

int maggiori = 0, minori = 0, uguali = 0;

for (int i = 0; i < n; i++) {
if (numeri[i] > k)
    maggiori++;
else if (numeri[i] < k)
        minori++;
else
uguali++;
}

cout << "Numeri maggiori di k: " << maggiori << endl;
cout << "Numeri minori di k: " << minori << endl;
cout << "Numeri uguali a k: " << uguali << endl;

return 0;
}
