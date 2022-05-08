#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include "Staffer.h"

using namespace std;

class Student: public Staffer
{
private:
    int m_course;
public:
    Student (string name, sex s, int year, int course): Staffer(name,s,year), m_course(course){}
    void setCourse (int course) {m_course = course;}
    int getCourse(){return m_course;}
    string repr()
    {
        string result="";
        result+=to_string(m_id)+"|";
        result+=m_name+"|";
        result+=to_string(m_s)+"|";
        result+=to_string(m_year)+"|";
        result+="Student|";
        result+=to_string(m_course)+"\n";
        return result;
    }
};


#endif // STUDENT_H
