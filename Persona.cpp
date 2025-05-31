#include "Persona.h"
using namespace std;

Persona::Persona(){
    institution = "-";
    name = "-";
    mail = "-";
}

Persona::Persona(string _institution,string _name, string _mail){
    institution = _institution;
    name = _name;
    mail = _mail;
}

string Persona::getName(){return name;}
string Persona::getMail(){return mail;}
string Persona::getInstitution(){return institution;}
void Persona::setName(string _name){name = _name;}
void Persona::setMail(string _mail){mail = _mail;}
void Persona::setInstitutions(string _institution){institution = _institution;}
void Persona::mostrarDatos(){
    cout << "Nombre: " << name << "\nCorreo: " << mail << "\nInstitución: " << institution << endl;
}