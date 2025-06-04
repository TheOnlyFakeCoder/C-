#ifndef BOOKS_H
#define BOOKS_H
#include "Element.h"
#include <string>
using namespace std;

class Books : Element {
    private:
        int length;
    public:
        int getDuration();
        Books();
        Books(string,string,int,int);
        ~Books();
};

#endif