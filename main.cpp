/*

main.cpp
Author: Jason Nguyen
Date: May 17 2021

*/

#include <cerrno>
#include <cmath>
#include <cstdlib>
#include "Schedule.hpp"
#include "Preferences.hpp"
#include "CoursePlan.hpp"
#include "RelatedCourseList.hpp"
using namespace std;

int main(int, char *argv[]) {

    Schedule init_sch{"inputSchedule.txt"}; // the starting schedule, could be last years schedule, random, bad
    CoursePlan coursePlans{"coursePlans.txt"};
    Preferences prefs{"instructors.txt"}; // preferences for ALL instructors, teaching or not
    RelatedCourseList relatedCourses {init_sch}; // group lec, lab, discussions
    
    
    
    // output schedule in same format as "inputSchedule.txt"
    bool noEndl = true;
    for (auto& v: init_sch)
    {
        if (noEndl)
        {
            noEndl = false;
        }
        else
        {
            cout << endl;
        }
        for (auto& l: v)
        {
            string line;
            line = l.first + "=> " + l.second;
            cout << line << endl;
        } 
    }
    
    return 0;
}