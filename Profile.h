#ifndef PROFILE_H
#define PROFILE_H
#include <string>
using namespace std;

class Profile {
    protected:
        string preferedGenre;
        int durationFormat;
        int calification;
    public:
        string getTitle();
        string getGenre();
        int getCalification();
        void addCalification();
        Profile();
        Profile(string,int,int);
        ~Profile();
};

#endif