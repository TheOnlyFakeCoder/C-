#ifndef USER_H
#define USER_H
#include <string>
#include "Profile.h"
using namespace std;

class User{
    private:
        string email;
        string name;
        Profile profile;
    public:
        string str();
        User();
        User(string,string,Profile);
        ~User();
};

#endif