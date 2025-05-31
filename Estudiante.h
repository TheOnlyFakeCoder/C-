#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"
#include <string>
using namespace std;

class Estudiante : public Persona {
private:
    string carrera;

public:
    string getCarrera() const;
    void setCarrera(const string&);
    void mostrarDatos() override;
    Estudiante();
    Estudiante(string,string,string,string);
};

#endif