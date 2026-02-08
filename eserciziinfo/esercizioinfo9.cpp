
#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

if (n <= 0) {cout << "n deve essere maggiore di 0" << endl;
return 0;}

int valore = 1;
for (int i = 0; i < n; i++) {cout << valore << " ";
     valore *= 2;}

return 0;
}
