/*

RelatedCourseList.hpp
Author: Jason Nguyen
Date: May 17 2021

*/

#ifndef RELATEDCOURSELIST_H
#define RELATEDCOURSELIST_H

#include <vector>
#include <list>
#include <string>
#include <fstream>
#include <iostream>
#include "Schedule.hpp"

using namespace std;
struct RelatedCourseList : public vector<list<pair<string,string>>>
{
    using vector<list<pair<string,string>>>::vector;
    RelatedCourseList(Schedule& init_sch);
};



#endif /* RELATEDCOURSELIST_H */