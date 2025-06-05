#ifndef SONGS_H
#define SONGS_H
#include "Element.h"
#include <string>
using namespace std;

class Songs : Element {
    private:
        int duration;
        string musicGenre;
    public:
        int getDuration();
        string getMusicGenre();
        Songs();
        Songs(string,string,int,int);
        ~Songs();
};

#endif