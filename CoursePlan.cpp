/*

CoursePlan.cpp
Author: Jason Nguyen
Date: May 17 2021

*/

#include "CoursePlan.hpp"
using namespace std;

CoursePlan::CoursePlan(string filename)
{
    ifstream myfile(filename);

    if (myfile.is_open())
    {
        list<pair<string, string>> tempList;
        string line;
        string delimiter = "=>";
        while(getline(myfile, line))
        {
            if (line.length() == 0)
            {
                push_back(tempList);
                tempList.clear();
            }
            else
            {
                string key = line.substr(0, line.find(delimiter));
                string value = line.substr(key.length() + 3);
                std::pair<string, string> tempPair = make_pair(key,value);
                tempList.push_back(tempPair);
            }
        }
        myfile.close();
    }
      
}