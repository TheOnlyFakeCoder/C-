#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
using namespace std;

class Element {
    protected:
        string title;
        int calification;
    public:
        string getTitle();
        int getCalification();
        void addCalification();
        Element();
        Element(string,string,int);
        ~Element();
};

#endif