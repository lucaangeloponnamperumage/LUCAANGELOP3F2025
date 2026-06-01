#include <stdio.h>

/*
 Funzione che calcola il prodotto di due numeri
 usando solo la somma ripetuta.
 */
int prodotto(int a, int b) {
    int risultato = 0;

    // Somma a per b volte
    for (int i = 0; i < b; i++) {
        risultato += a;
    }

    return risultato;
}

int main() {

    // Stampa il prodotto di 5 e 3
    printf("%d\n", prodotto(5, 3));

    return 0;
}
