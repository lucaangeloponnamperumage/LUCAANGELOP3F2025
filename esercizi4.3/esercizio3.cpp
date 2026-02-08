
#include <iostream>
using namespace std;

int main() {
int n;

do {
    cout << "Inserisci un numero n maggiore di 0: ";
    cin >> n;
} while (n <= 0);

long long numero = 1;
cout << "Sequenza: ";

for (int i = 0; i < n; i++) {
    cout << numero << " ";
    numero *= 3;}

return 0;
}
