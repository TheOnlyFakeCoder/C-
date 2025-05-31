#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona{
    protected:
        string name;
        string mail;
        string institution;
    
    public:
        string getName();
        string getMail();
        string getInstitution();
        void setName(string);
        void setMail(string);
        void setInstitutions(string);
        virtual void mostrarDatos();
        Persona();
        Persona(string,string,string);
};

#endif