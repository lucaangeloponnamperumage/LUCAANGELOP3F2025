#include <stdio.h>

// Programma che verifica se il numero inserito è compreso tra -5 e 10 

int main(){
    float numero;
    printf("Inserisci il numero: ");
    scanf("%f", &numero);

    // Controllo intervallo corretto: numero tra -5 e 10

    if(numero>=-5 && numero<=10){
        printf("Il numero %.2f è compreso tra -5 e 10\n", numero);
    } else {
        printf("Il dato %.2f  è fuori dall'intervallo\n", numero);
    }
}