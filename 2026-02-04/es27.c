#include <stdio.h>

/*
 Programma che stampa i primi N termini
 della successione di Fibonacci.
 */

int main() {
    int N;
    int a = 1, b = 1, temp;

 
    printf("Quanti termini? ");
    scanf("%d", &N);

    // Stampa dei primi N termini
    for (int i = 1; i <= N; i++) {
        printf("%d ", a);

        temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}
