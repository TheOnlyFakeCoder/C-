#include "Profesor.h"
#include <iostream>
using namespace std;

string Profesor::getEspecialidad() const {
    return especialidad;
}

void Profesor::setEspecialidad(const string& _esp) {
    especialidad = _esp;
}

void Profesor::mostrarDatos() {
    Persona::mostrarDatos();
    cout << "Especialidad: " << especialidad << endl
        << "--------------------------" << endl;
}

Profesor::Profesor():Persona(){
    especialidad = "-";
}

Profesor::Profesor(string institution,string name, string mail,string _especialidad) : Persona(institution,name,mail){
    especialidad = _especialidad;
}