#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <vector>
#include "Staffer.h"

using namespace std;

class Teacher: public Staffer
{
private:
    int m_num_of_groups;
public:
    Teacher (string name, sex s, int year, int num_of_groups): Staffer(name,s,year), m_num_of_groups(num_of_groups){}
    void setNumOfGroups(int numOfGroups) {m_num_of_groups = numOfGroups;}
    int getNumOfGroups(){return m_num_of_groups;}
    string repr()
    {
        string result="";
        result+=to_string(m_id)+"|";
        result+=m_name+"|";
        result+=to_string(m_s)+"|";
        result+=to_string(m_year)+"|";
        result+="Teacher|";
        result+=to_string(m_num_of_groups)+"\n";
        return result;
    }
};

#endif // TEACHER_H
