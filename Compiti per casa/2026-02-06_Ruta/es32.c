#include <stdio.h>

/*
  Programma che legge una sequenza di interi (termina con 999)
  e verifica se la differenza tra numeri consecutivi è costante.
  Stampa anche quanti numeri sono stati inseriti (escluso 999).
 */

int main() {
    int prev, curr;
    int diff, diff_iniziale;
    int count = 0;
    int costante = 1;

    printf("Inserisci numeri (999 per finire):\n");

    // Legge il primo numero
    scanf("%d", &prev);
    if (prev == 999) {
        printf("Numeri inseriti: 0\n");
        return 0;
    }
    count = 1;

    // Legge il secondo numero
    scanf("%d", &curr);
    if (curr == 999) {
        printf("Numeri inseriti: 1\n");
        return 0;
    }
    count = 2;

    // Differenza iniziale
    diff_iniziale = curr - prev;

    // Legge i successivi numeri
    while (1) {
        prev = curr;
        scanf("%d", &curr);

        if (curr == 999)
            break;

        count++;

        diff = curr - prev;
        if (diff != diff_iniziale)
            costante = 0;
    }

    // Output
    if (costante)
        printf("La differenza e' costante: %d\n", diff_iniziale);
    else
        printf("La differenza NON e' costante.\n");

    printf("Numeri inseriti: %d\n", count);

    return 0;
}
