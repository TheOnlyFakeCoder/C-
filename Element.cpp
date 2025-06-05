#include "Element.h"
#include <iostream>
#include <string>
using namespace std;

string Element::getTitle(){return title;}
string Element::getAuthor(){return author;}
int Element::getCalification(){return calification;}
void Element::setTitle(string _title){title = _title;}
void Element::setAuthor(string _author){author = _author;}
void Element::setCalification(int _calification){calification = _calification;}

void Element::addCalification(){
    cout << "calificación" << endl;
}

Element::Element(){
    title = "-";
    author = "-";
    calification = 0;
}

Element::Element(string _title,string _author,int _calification){
    title = _title;
    author = _author;
    calification = _calification;
}

Element::~Element(){}