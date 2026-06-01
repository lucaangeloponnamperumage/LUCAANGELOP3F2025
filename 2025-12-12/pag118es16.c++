#include <iostream>
using namespace std;

/*
 * Programma che legge i dati di tre classi,
 * individua quella con più studenti e
 * calcola la media degli studenti.
 */

int main() {
    string anno1, sezione1, anno2, sezione2, anno3, sezione3;
    int s1, s2, s3;

    // Input prima classe
    cout << "Anno prima classe: ";
    cin >> anno1;
    cout << "Sezione prima classe: ";
    cin >> sezione1;
    cout << "Studenti prima classe: ";
    cin >> s1;

    // Input seconda classe
    cout << "Anno seconda classe: ";
    cin >> anno2;
    cout << "Sezione seconda classe: ";
    cin >> sezione2;
    cout << "Studenti seconda classe: ";
    cin >> s2;

    // Input terza classe
    cout << "Anno terza classe: ";
    cin >> anno3;
    cout << "Sezione terza classe: ";
    cin >> sezione3;
    cout << "Studenti terza classe: ";
    cin >> s3;

    // Classe con più studenti
    if (s1 >= s2 && s1 >= s3)
        cout << "Classe con piu' studenti: " << anno1 << " " << sezione1 << endl;
    else if (s2 >= s1 && s2 >= s3)
        cout << "Classe con piu' studenti: " << anno2 << " " << sezione2 << endl;
    else
        cout << "Classe con piu' studenti: " << anno3 << " " << sezione3 << endl;

    // Calcolo media
    int media = (s1 + s2 + s3) / 3;
    cout << "Media studenti: " << media << endl;

    // Classi sotto la media
    cout << "Classi sotto la media:" << endl;
    if (s1 < media) cout << anno1 << " " << sezione1 << endl;
    if (s2 < media) cout << anno2 << " " << sezione2 << endl;
    if (s3 < media) cout << anno3 << " " << sezione3 << endl;

    return 0;
}
