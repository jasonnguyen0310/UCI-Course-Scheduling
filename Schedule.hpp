/*

Schedule.hpp
Author: Jason Nguyen
Date: May 17 2021

*/

#ifndef SCHEDULE_H
#define SCHEDULE_H


#include <vector>
#include <list>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Schedule : public vector<list<pair<string,string>>>
{
    public:
        using vector<list<pair<string,string>>>::vector;
        int value;
        Schedule(string filename);
        processSchedule();
};


#endif /* SCHEDULE_H */