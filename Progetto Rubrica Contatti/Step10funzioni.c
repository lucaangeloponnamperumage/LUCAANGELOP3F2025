
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_CONTATTI 100

typedef struct {
int id;
int telefono;
} Contatto;

void popolaAgenda(Contatto agenda[], int *contatore) {
int idInit[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int telInit[] = {5551, 5552, 5553, 5554, 5555, 5556, 5557, 5558, 5559, 5550};
    
for(int i = 0; i < 10; i++) {
    agenda[i].id = idInit[i];
    agenda[i].telefono = telInit[i];}
    *contatore = 10; 
}

int ricercaSequenziale(Contatto agenda[], int contatore, int idCercato) {
for (int i = 0; i < contatore; i++) {
if (agenda[i].id == idCercato) { 
return i; 
}}
return -1; 
}

bool eliminaContatto(Contatto agenda[], int *contatore, int idDaEliminare) {
int indice = ricercaSequenziale(agenda, *contatore, idDaEliminare);
    
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
printf("\n--- STATO ATTUALE AGENDA (%d contatti) ---\n", contatore);
for(int i = 0; i < contatore; i++) {
printf("[%d] ID: %d -> Telefono: %d\n", i, agenda[i].id, agenda[i].telefono);
}
printf("-----------------------------------------\n");
}