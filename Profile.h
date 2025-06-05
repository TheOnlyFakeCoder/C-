#ifndef PROFILE_H
#define PROFILE_H
#include <string>
using namespace std;

class Profile {
    protected:
        string preferedGenre;
        int durationFormat;
        bool isEducational;
        string musicGenre;
    public:
        string getPreferedGenre();
        int getDurationFormat();
        bool getIsEducational();
        void setPreferedGenre(string);
        void setDurationFormat(int);
        void setIsEducational(bool);
        void setMusicGenre(string);
        void setMusicGenre();
        void addCalification();
        Profile();
        Profile(string,int,bool,string);
        ~Profile();
};

#endif