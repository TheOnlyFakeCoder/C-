#ifndef STRAIGHTDURATION_H
#define STRAIGHTDURATION_H
#include "Element.h"
#include <string>
using namespace std;

class Songs : Element {
    private:
        int duration;
    public:
        int getDuration();
        Songs();
        Songs(string,string,int,int);
        ~Songs();
};

#endif