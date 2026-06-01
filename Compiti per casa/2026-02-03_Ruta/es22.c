#include <stdio.h>

/*
  Funzione che calcola il quoziente
  della divisione intera tramite sottrazioni successive.
 */
int quoziente(int a, int b) {
    int q = 0;

    while (a >= b) {
        a -= b;
        q++;
    }

    return q;
}

/*
 * Funzione che calcola il resto
 * della divisione intera tramite sottrazioni successive.
 */
int resto(int a, int b) {
    while (a >= b) {
        a -= b;
    }

    return a;
}

int main() {
    int a, b;

    // Input dei due numeri
    printf("Inserisci due numeri interi: ");
    scanf("%d %d", &a, &b);

    // Output di quoziente e resto
    printf("Quoziente: %d\n", quoziente(a, b));
    printf("Resto: %d\n", resto(a, b));

    return 0;
}
