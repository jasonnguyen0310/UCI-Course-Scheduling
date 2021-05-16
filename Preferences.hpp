/*

Preferences.hpp
Author: Jason Nguyen
Date: May 17 2021

*/

#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <vector>
#include <list>
#include <string>
#include <fstream>
#include <iostream>


using namespace std;
struct Preferences : public vector<list<pair<string,string>>>
{
    public:
        using vector<list<pair<string,string>>>::vector;
        Preferences(string filename);
};



#endif /* PREFERENCES_H */