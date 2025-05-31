#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"
#include <string>
using namespace std;

class Profesor : public Persona {
private:
    string especialidad;

public:
    string getEspecialidad() const;
    void setEspecialidad(const string&);
    void mostrarDatos() override;
    Profesor();
    Profesor(string,string,string,string);
};

#endif