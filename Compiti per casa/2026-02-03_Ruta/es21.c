#include <stdio.h>

/*
 Programma che legge coppie di numeri interi.
 L'inserimento termina se:
 - i due numeri sono uguali
 - il secondo numero è maggiore del primo
 */

int main() {
    int n1, n2;

    printf("Inserimento coppie di numeri\n");

    // Ciclo di inserimento
    while (1) {
        printf("\nInserisci il primo numero: ");
        scanf("%d", &n1);

        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);

        // Caso numeri uguali
        if (n1 == n2) {
            printf("\nInserimento terminato: numeri uguali (%d == %d)\n", n1, n2);
            break;
        }

        // Caso secondo numero maggiore
        if (n2 > n1) {
            printf("\nInserimento terminato: %d > %d\n", n2, n1);
            break;
        }

        // Coppia valida
        printf("Coppia valida\n");
    }

    return 0;
}
