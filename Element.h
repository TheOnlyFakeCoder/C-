#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
using namespace std;

class Element {
    protected:
        string title;
        string author;
        int calification;
    public:
        string getTitle();
        string getAuthor();
        int getCalification();
        void setTitle(string);
        void setAuthor(string);
        void setCalification(int);
        void addCalification();
        Element();
        Element(string,string,int);
        ~Element();
};

#endif