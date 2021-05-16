/*

CoursePlan.hpp
Author: Jason Nguyen
Date: May 17 2021

*/

#ifndef COURSEPLAN_H
#define COURSEPLAN_H

#include <vector>
#include <list>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

struct CoursePlan : public vector<list<pair<string,string>>>
{
    public:
        using vector<list<pair<string,string>>>::vector;
        CoursePlan(string filename);
};


#endif /* COURSEPLAN_H */