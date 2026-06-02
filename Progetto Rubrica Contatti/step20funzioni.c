
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_CONTATTI 100

typedef struct {
    int id;
    int telefono;
} Contatto;

int ricercaBinaria(Contatto agenda[], int contatore, int idCercato) {
    int inizio = 0;
    int fine = contatore - 1;
    
    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;
        
        if (agenda[medio].id == idCercato) {
            return medio;
        }
        if (agenda[medio].id < idCercato) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;
        }
    }
    return -1;
}

bool inserisciOrdinato(Contatto agenda[], int *contatore, int nuovoId, int nuovoTel) {
    if (*contatore >= MAX_CONTATTI) {
        return false;
    }
    
    int i = *contatore - 1;
    
    while (i >= 0 && agenda[i].id > nuovoId) {
        agenda[i + 1] = agenda[i];
        i--;
    }
    
    agenda[i + 1].id = nuovoId;
    agenda[i + 1].telefono = nuovoTel;
    (*contatore)++;
    
    return true;
}

void popolaAgendaOrdinata(Contatto agenda[], int *contatore) {
    int idInit[] = {50, 20, 90, 10, 40, 80, 30, 70, 100, 60};
    int telInit[] = {5555, 5552, 5559, 5551, 5554, 5558, 5553, 5557, 5550, 5556};
    
    *contatore = 0;
    for(int i = 0; i < 10; i++) {
        inserisciOrdinato(agenda, contatore, idInit[i], telInit[i]);
    }
}

bool eliminaContatto(Contatto agenda[], int *contatore, int idDaEliminare) {
    int indice = ricercaBinaria(agenda, *contatore, idDaEliminare);
    
    if (indice == -1) {
        return false; 
    }
    
    for (int i = indice; i < (*contatore) - 1; i++) {
        agenda[i] = agenda[i + 1];
    }
    
    (*contatore)--; 
    return true;
}

void stampaAgenda(Contatto agenda[], int contatore) {
    printf("\n--- STATO ATTUALE AGENDA ORDINATA (%d contatti) ---\n", contatore);
    for(int i = 0; i < contatore; i++) {
        printf("[%d] ID: %d -> Telefono: %d\n", i, agenda[i].id, agenda[i].telefono);
    }
    printf("--------------------------------------------------\n");
}