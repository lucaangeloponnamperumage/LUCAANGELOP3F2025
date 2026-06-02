
#include "contatto.h"

Contatto::Contatto() {
    id = 0;
    telefono = 0;
}

Contatto::Contatto(int nuovoId, int nuovoTel) {
    id = nuevoId;
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