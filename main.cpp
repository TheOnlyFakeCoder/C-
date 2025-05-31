#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
#include "Profesor.h"

using namespace std;

void imprimirInfo(Persona* p){
    p->mostrarDatos();
}

int main() {
    int n;
    cout << "Cuántas personas asistirán al congreso" << endl;
    cin >> n;
    Persona** personas = new Persona*[n];
    bool error;
    int kind;
    string name;
    string institution;
    string mail;
    string carrera;
    string especialidad;
    for(int i = 0; i<n; i++){
        cout << "Para la persona número " << to_string(i+1) << ", introduzca" << endl;
        cout << "Nombre: ";
        cin >> name;
        cout << "\nCorreo: ";
        cin >> mail;
        cout << "\nInstitución: ";
        cin >> institution;
        do{
        error = false;
        cout << "\n¿Es un estudiante o profesor?" << endl;
        cout << "1. Estudiante " << endl;
        cout << "2. Profesor" << endl;
        cin >> kind;
            switch(kind){
                case 1:
                    cout << "Introduzca la carrera: " << endl;
                    cin >> carrera;
                    personas[i] = new Estudiante(institution,name,mail,carrera);
                break;
                case 2:
                    cout << "Introduzca la especialidad: " << endl;
                    cin >> especialidad;
                    personas[i] = new Profesor(institution,name,mail,especialidad);
                break;
                default:
                    cout << "Entrada no válida";
                    error = true;
            }
        }while(error);
    }
    for(int i=0; i<n; i++){
        imprimirInfo(personas[i]);
    }
    return 0;
}