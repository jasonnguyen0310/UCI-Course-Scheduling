/*

main.cpp
Author: Jason Nguyen
Date: May 17 2021

*/

#include <cerrno>
#include <cmath>
#include <cstdlib>
#include "Schedule.hpp"
using namespace std;

int main(int, char *argv[]) {

    Schedule s("inputSchedule.txt");


    //  inputSchedule is processed so that lectures, labs, discussion do not conflict with each other. 
    









    // output schedule in same format as "inputSchedule.txt"
    bool noEndl = true;
    for (auto v: s)
    {
        if (noEndl)
        {
            noEndl = false;
        }
        else
        {
            cout << endl;
        }
        for (auto l: v)
        {
            string line;
            line = l.first + "=> " + l.second;
            cout << line << endl;
        } 

    }
    return 0;
}