#include "Estudiante.h"
#include <iostream>
using namespace std;

string Estudiante::getCarrera() const {
    return carrera;
}

void Estudiante::setCarrera(const string& _carrera) {
    carrera = _carrera;
}

void Estudiante::mostrarDatos() {
    Persona::mostrarDatos();
    cout << "Carrera: " << carrera << endl
        << "--------------------------"<<endl;
}

Estudiante::Estudiante():Persona(){
    carrera = "-";
}

Estudiante::Estudiante(string institution,string name, string mail,string _carrera) : Persona(institution,name,mail){
    carrera = _carrera;
}