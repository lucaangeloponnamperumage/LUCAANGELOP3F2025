
#include <iostream>
using namespace std;

int main() {
string c1, c2, c3;
int s1, s2, s3;
cout << "Classe1 e numero: "; cin >> c1 >> s1;
cout << "Classe2 e numero: "; cin >> c2 >> s2;
cout << "Classe3 e numero: "; cin >> c3 >> s3;
string maxc = c1; int maxs = s1;
if(s2 > maxs){ maxc=c2; maxs=s2; }
if(s3 > maxs){ maxc=c3; maxs=s3; }
double media = (s1+s2+s3)/3.0;
cout << "Classe piu' numerosa: " << maxc << " con " << maxs << endl;
cout << "Media studenti: " << media << endl;
cout << "Classi sotto la media: ";
if(s1<media) cout << c1 << " ";
if(s2<media) cout << c2 << " ";
if(s3<media) cout << c3 << " ";
cout << endl;
int cont=0;
cout << "Classi con meno di 20 studenti: ";
if(s1<20){ cout << c1 << " "; cont++; }
if(s2<20){ cout << c2 << " "; cont++; }
if(s3<20){ cout << c3 << " "; cont++; }
cout << " (" << cont << " classi)" << endl;

return 0;
}
