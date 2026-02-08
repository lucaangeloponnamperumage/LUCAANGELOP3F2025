
#include <iostream>
using namespace std;

int main() {
int a,b,r;
cin >> a >> b;
cin >> r;
if(r==a+b) cout << "Bravo, hai indovinato al primo tentativo.\n";
else { 
cin >> r;
cout << (r==a+b ? "Bravino, ha indovinato al secondo tentativo.\n" 
: "Ti serve un ripasso di matematica.\n");}
return 0;
}
