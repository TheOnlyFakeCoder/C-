#include "Songs.h"
#include <string>
using namespace std;

int Songs::getDuration(){return duration;}
string Songs::getMusicGenre(){return musicGenre;}
void Songs::setDuration(int _duration){duration = _duration;}
void Songs::setMusicGenre(string _musicGenre){musicGenre = _musicGenre;}

Songs::Songs(){
    musicGenre = "-";
    duration = 0;
}

Songs::Songs(string title,string author,int calification,int _duration,string _musicGenre) : Element(title,author,calification){
    musicGenre = _musicGenre;
    duration = _duration;
}

Songs::~Songs(){}