#include <stdio.h>

/*
  Funzione che calcola la potenza
  di una base elevata a un esponente intero
  usando la moltiplicazione ripetuta.
 */
int potenza(int base, int esponente) {
    int risultato = 1;

    // Moltiplica la base per esponente volte
    for (int i = 0; i < esponente; i++) {
        risultato *= base;
    }

    return risultato;
}

int main() {
    int base, esponente;

    // Input dei valori
    printf("Inserisci base ed esponente: ");
    scanf("%d %d", &base, &esponente);

    // Output del risultato
    printf("Risultato: %d\n", potenza(base, esponente));

    return 0;
}
