#include <stdio.h>

/*
  Programma che calcola il quadrato di N
  come somma dei primi N numeri dispari.
 */

int main() {
    int N;
    int somma = 0;
    int dispari = 1;

    // Input
    printf("Inserisci N: ");
    scanf("%d", &N);

    // Somma dei primi N numeri dispari
    for (int i = 0; i < N; i++) {
        somma += dispari;
        dispari += 2;
    }

    
    printf("%d al quadrato e': %d\n", N, somma);

    return 0;
}
