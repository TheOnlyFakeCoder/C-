#ifndef PODCASTS_H
#define PODCASTS_H
#include "Element.h"
#include <string>
using namespace std;

class Podcasts : Element {
    private:
        int duration;
        bool isEducational;
    public:
        int getDuration();
        bool getIsEducational();
        Podcasts();
        Podcasts(string,int,int,bool);
        ~Podcasts();
};

#endif