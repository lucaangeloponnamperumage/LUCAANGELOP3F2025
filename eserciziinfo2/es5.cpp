
#include <iostream>
using namespace std;

int main() {
int n;
cout << "Inserisci il numero di coppie: ";
cin >> n;

float a, b;
cout << "Inserisci la prima coppia: ";
cin >> a >> b;

float mediaMax = (a + b) / 2;
float xMax = a, yMax = b;

for (int i = 1; i < n; i++) {cout << "Inserisci una coppia: ";
    cin >> a >> b;

float media = (a + b) / 2;
if (media > mediaMax) {
            mediaMax = media;
            xMax = a;
            yMax = b;}}

cout << "La coppia con la media maggiore e': ("
<< xMax << ", " << yMax << ")" << endl;
cout << "Media massima: " << mediaMax << endl;

return 0;
}
