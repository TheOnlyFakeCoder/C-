#ifndef SONGS_H
#define SONGS_H
#include "Element.h"
#include <string>
using namespace std;

class Songs : public Element {
    private:
        int duration;
        string musicGenre;
    public:
        int getDuration();
        string getMusicGenre();
        void setDuration(int _duration);
        void setMusicGenre(string _musicGenre);
        Songs();
        Songs(string,string,int,int,string);
        ~Songs();
};

#endif