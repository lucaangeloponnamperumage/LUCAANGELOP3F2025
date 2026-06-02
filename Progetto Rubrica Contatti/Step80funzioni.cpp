
include <iostream>
#include <cstdlib>
#include <stdbool.h>
#include <fstream>

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

class GestoreFilePersistente : public GestoreContattiABC {
private:
    const char* nomeFile;
    void inizializzaFileIniziale();

public:
    GestoreFilePersistente();
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

GestoreFilePersistente::GestoreFilePersistente() {
    nomeFile = "agenda_persistente.txt";
    std::ifstream fileIn(nomeFile);
    if (!fileIn) {
        inizializzaFileIniziale();
    } else {
        fileIn.close();
    }
}

void GestoreFilePersistente::inizializzaFileIniziale() {
    std::ofstream fileOut(nomeFile);
    if (!fileOut) return;
    for (int i = 0; i < 10; i++) {
        fileOut << -1 << " " << 0 << "\n";
    }
    fileOut.close();
    popolaAutomaticamente();
}

bool GestoreFilePersistente::inserisciOrdinato(int nuovoId, int nuovoTel) {
    std::ifstream fileIn(nomeFile);
    if (!fileIn) return false;

    Contatto tempAgenda[MAX_CONTATTI];
    int contatore = 0;
    int readId, readTel;
    bool inserito = false;

    while (fileIn >> readId >> readTel && contatore < MAX_CONTATTI) {
        if (!inserito && readId == -1) {
            tempAgenda[contatore].setId(nuovoId);
            tempAgenda[contatore].setTelefono(nuovoTel);
            inserito = true;
        } else {
            tempAgenda[contatore].setId(readId);
            tempAgenda[contatore].setTelefono(readTel);
        }
        contatore++;
    }
    fileIn.close();

    if (!inserito && contatore < MAX_CONTATTI) {
        tempAgenda[contatore].setId(nuovoId);
        tempAgenda[contatore].setTelefono(nuovoTel);
        contatore++;
        inserito = true;
    }

    if (!inserito) return false;

    std::ofstream fileOut(nomeFile);
    for (int i = 0; i < contatore; i++) {
        fileOut << tempAgenda[i].getId() << " " << tempAgenda[i].getTelefono() << "\n";
    }
    fileOut.close();
    return true;
}

int GestoreFilePersistente::cercaContatto(int idCercato) const {
    std::ifstream fileIn(nomeFile);
    if (!fileIn) return -1;

    int readId, readTel;
    while (fileIn >> readId >> readTel) {
        if (readId != -1 && readId == idCercato) {
            fileIn.close();
            return readTel;
        }
    }
    fileIn.close();
    return -1;
}

bool GestoreFilePersistente::eliminaContatto(int idDaEliminare) {
    std::ifstream fileIn(nomeFile);
    if (!fileIn) return false;

    Contatto tempAgenda[MAX_CONTATTI];
    int contatore = 0;
    int readId, readTel;
    bool trovato = false;

    while (fileIn >> readId >> readTel && contatore < MAX_CONTATTI) {
        if (readId != -1 && readId == idDaEliminare) {
            tempAgenda[contatore].setId(-1);
            tempAgenda[contatore].setTelefono(0);
            trovato = true;
        } else {
            tempAgenda[contatore].setId(readId);
            tempAgenda[contatore].setTelefono(readTel);
        }
        contatore++;
    }
    fileIn.close();

    if (!trovato) return false;

    std::ofstream fileOut(nomeFile);
    for (int i = 0; i < contatore; i++) {
        fileOut << tempAgenda[i].getId() << " " << tempAgenda[i].getTelefono() << "\n";
    }
    fileOut.close();
    return true;
}

void GestoreFilePersistente::popolaAutomaticamente() {
    int idInit[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int telInit[] = {5551, 5552, 5553, 5554, 5555, 5556, 5557, 5558, 5559, 5550};
    
    std::ofstream fileOut(nomeFile);
    if (!fileOut) return;

    for(int i = 0; i < 10; i++) {
        fileOut << idInit[i] << " " << telInit[i] << "\n";
    }
    fileOut.close();
}

void GestoreFilePersistente::stampaAgenda() const {
    std::ifstream fileIn(nomeFile);
    if (!fileIn) return;

    std::cout << "\n--- STATO ATTUALE FILE PERSISTENTE (CON VALORI MARKER) ---\n";
    int readId, readTel;
    int i = 0;
    while (fileIn >> readId >> readTel) {
        if (readId == -1) {
            std::cout << "[" << i << "] [POSIZIONE VUOTA - MARKER -1]\n";
        } else {
            std::cout << "[" << i << "] ID: " << readId << " -> Telefono: " << readTel << "\n";
        }
        i++;
    }
    std::cout << "---------------------------------------------------------\n";
    fileIn.close();
}