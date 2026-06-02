
#include <iostream>
#include <cstdlib>
#include "contatto.h"

#define MAX_CONTATTI 100

int ricercaBinaria(const Contatto agenda[], int contatore, int idCercato) {
    int inizio = 0;
    int fine = contatore - 1;
    
    while (inizio <= fine) {
        int medio = inizio + (fine - inizio) / 2;
        
        if (agenda[medio].getId() == idCercato) {
            return medio;
        }
        if (agenda[medio].getId() < idCercato) {
            inizio = medio + 1;
        } else {
            fine = medio - 1;
        }
    }
    return -1;
}

bool inserisciOrdinato(Contatto agenda[], int &contatore, int nuovoId, int nuovoTel) {
    if (contatore >= MAX_CONTATTI) {
        return false;
    }
    
    int i = contatore - 1;
    
    while (i >= 0 && agenda[i].getId() > nuovoId) {
        agenda[i + 1] = agenda[i];
        i--;
    }
    
    agenda[i + 1].setId(nuovoId);
    agenda[i + 1].setTelefono(nuovoTel);
    contatore++;
    
    return true;
}

void popolaAgendaOrdinata(Contatto agenda[], int &contatore) {
    int idInit[] = {50, 20, 90, 10, 40, 80, 30, 70, 100, 60};
    int telInit[] = {5555, 5552, 5559, 5551, 5554, 5558, 5553, 5557, 5550, 5556};
    
    contatore = 0;
    for(int i = 0; i < 10; i++) {
        inserisciOrdinato(agenda, contatore, idInit[i], telInit[i]);
    }
}

bool eliminaContatto(Contatto agenda[], int &contatore, int idDaEliminare) {
    int indice = ricercaBinaria(agenda, contatore, idDaEliminare);
    
    if (indice == -1) {
        return false; 
    }
    
    for (int i = indice; i < contatore - 1; i++) {
        agenda[i] = agenda[i + 1];
    }
    
    contatore--; 
    return true;
}

void stampaAgenda(const Contatto agenda[], int contatore) {
    std::cout << "\n--- STATO ATTUALE AGENDA ORDINATA (" << contatore << " contatti) ---\n";
    for(int i = 0; i < contatore; i++) {
        std::cout << "[" << i << "] ID: " << agenda[i].getId() << " -> Telefono: " << agenda[i].getTelefono() << "\n";
    }
    std::cout << "--------------------------------------------------\n";
}

int main() {
    Contatto agenda[MAX_CONTATTI];
    int contatore = 0; 
    
    int idInput, telInput;
    int indiceTrovato;

    popolaAgendaOrdinata(agenda, contatore);
    stampaAgenda(agenda, contatore);

    std::cout << "\n--- TEST INSERIMENTO ORDINATO ---\n";
    std::cout << "Inserisci un nuovo ID numerico: ";
    std::cin >> idInput;
    std::cout << "Inserisci il numero di telefono: ";
    std::cin >> telInput;
    
    if (inserisciOrdinato(agenda, contatore, idInput, telInput)) {
        std::cout << "Contatto inserito nella posizione corretta.\n";
    } else {
        std::cout << "Impossibile inserire: agenda piena.\n";
    }
    stampaAgenda(agenda, contatore);

    std::cout << "\n--- TEST RICERCA BINARIA ---\n";
    std::cout << "Inserisci l'ID numerico da CERCARE con algoritmo binario: ";
    std::cin >> idInput;

    indiceTrovato = ricercaBinaria(agenda, contatore, idInput);

    if (indiceTrovato != -1) {
        std::cout << "Trovato! Posizione: " << indiceTrovato << " -> Telefono: " << agenda[indiceTrovato].getTelefono() << "\n";
    } else {
        std::cout << "ID non trovato.\n";
    }

    std::cout << "\n--- TEST CANCELLAZIONE CON COMPATTAZIONE ---\n";
    std::cout << "Inserisci l'ID numerico da CANCELLARE: ";
    std::cin >> idInput;

    if (eliminaContatto(agenda, contatore, idInput)) {
        std::cout << "Contatto rimosso con successo. L'ordine e' stato mantenuto.\n";
    } else {
        std::cout << "Impossibile eliminare: ID inesistente.\n";
    }

    stampaAgenda(agenda, contatore);

    return 0;
}