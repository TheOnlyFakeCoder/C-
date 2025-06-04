#ifndef SERIES_H
#define SERIES_H
#include "Element.h"
#include <string>
using namespace std;

class Series : Element {
    private:
        int episodeDuration;
        int episodesNumber;
    public:
        int getEpisodeDuration();
        int getEpisodeNumber();
        Series();
        Series(string,string,int,int,int);
        ~Series();
};

#endif