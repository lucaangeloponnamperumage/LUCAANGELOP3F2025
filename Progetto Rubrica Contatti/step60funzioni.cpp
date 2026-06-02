
#include <iostream>
#include <cstdlib>
#include <stdbool.h>

#define MAX_CONTATTI 100

class Contatto {
private:
    int id;
    int telefono;

public:
    Contatto();
    Contatto(int nuovoId, int nuovoTel);
    int getId() const;
    int getTelefono() const;
    void setId(int nuovoId);
    void setTelefono(int nuovoTel);
};

class GestoreContattiABC {
public:
    virtual ~GestoreContattiABC() {}
    virtual bool inserisciOrdinato(int nuovoId, int nuovoTel) = 0;
    virtual int cercaContatto(int idCercato) const = 0;
    virtual bool eliminaContatto(int idDaEliminare) = 0;
    virtual void popolaAutomaticamente() = 0;
    virtual void stampaAgenda() const = 0;
};

class GestoreRAMOrdinata : public GestoreContattiABC {
private:
    Contatto agenda[MAX_CONTATTI];
    int contatore;
    int ricercaBinaria(int idCercato) const;

public:
    GestoreRAMOrdinata();
    bool inserisciOrdinato(int nuovoId, int nuovoTel) override;
    int cercaContatto(int idCercato) const override;
    bool eliminaContatto(int idDaEliminare) override;
    void popolaAutomaticamente() override;
    void stampaAgenda() const override;
};

Contatto::Contatto() {
    id = 0;
    telefono = 0;
}

Contatto::Contatto(int nuovoId, int nuovoTel) {
    id = nuovoId;
    telefono = nuovoTel;
}

int Contatto::getId() const {
    return id;
}

int Contatto::getTelefono() const {
    return telefono;
}

void Contatto::setId(int nuovoId) {
    id = nuovoId;
}

void Contatto::setTelefono(int nuovoTel) {
    telefono = nuovoTel;
}

GestoreRAMOrdinata::GestoreRAMOrdinata() {
    contatore = 0;
}

int GestoreRAMOrdinata::ricercaBinaria(int idCercato) const {
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

bool GestoreRAMOrdinata::inserisciOrdinato(int nuovoId, int nuovoTel) {
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

int GestoreRAMOrdinata::cercaContatto(int idCercato) const {
    int indice = ricercaBinaria(idCercato);
    if (indice != -1) {
        return agenda[indice].getTelefono();
    }
    return -1;
}

bool GestoreRAMOrdinata::eliminaContatto(int idDaEliminare) {
    int indice = ricercaBinaria(idDaEliminare);
    
    if (indice == -1) {
        return false; 
    }
    
    for (int i = indice; i < contatore - 1; i++) {
        agenda[i] = agenda[i + 1];
    }
    
    contatore--; 
    return true;
}

void GestoreRAMOrdinata::popolaAutomaticamente() {
    int idInit[] = {50, 20, 90, 10, 40, 80, 30, 70, 100, 60};
    int telInit[] = {5555, 5552, 5559, 5551, 5554, 5558, 5553, 5557, 5550, 5556};
    
    contatore = 0;
    for(int i = 0; i < 10; i++) {
        inserisciOrdinato(idInit[i], telInit[i]);
    }
}

void GestoreRAMOrdinata::stampaAgenda() const {
    std::cout << "\n--- STATO ATTUALE AGENDA IN RAM ORDINATA (" << contatore << " contatti) ---\n";
    for(int i = 0; i < contatore; i++) {
        std::cout << "[" << i << "] ID: " << agenda[i].getId() << " -> Telefono: " << agenda[i].getTelefono() << "\n";
    }
    std::cout << "------\n";
}