
#ifndef CONTATTO_H
#define CONTATTO_H

#include <iostream>

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

#endif