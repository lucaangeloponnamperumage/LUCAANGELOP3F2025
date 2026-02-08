
#include <iostream>
using namespace std;

int main() {
int n;
cout << "Quanti voti vuoi inserire? ";
cin >> n;

int voti[n];

for (int i = 0; i < n; i++) {
    cout << "Inserisci un voto: ";
    cin >> voti[i];}

int maxSufficienze = -1;
int minInsufficienze = 11;

for (int i = 0; i < n; i++) {
if (voti[i] >= 6) {
if (voti[i] > maxSufficienze)
 maxSufficienze = voti[i];
} else {
if (voti[i] < minInsufficienze)
minInsufficienze = voti[i];}
}

if (maxSufficienze != -1)
cout << "Voto massimo tra le sufficienze: " << maxSufficienze << endl;
else
cout << "Non ci sono voti sufficienti." << endl;
if (minInsufficienze != 11)
cout << "Voto minimo tra le insufficienze: " << minInsufficienze << endl;
else
cout << "Non ci sono voti insufficienti." << endl;

return 0;
}
