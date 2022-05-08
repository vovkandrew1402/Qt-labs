#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <vector>
#include "Staffer.h"

using namespace std;

class Worker: public Staffer
{
private:
    int m_salary;
public:
    Worker (string name, sex s, int year, int salary): Staffer(name,s,year), m_salary(salary){}
    void setSalary(int salary) {m_salary = salary;}
    int getSalary() {return m_salary;}
    string repr()
    {
        string result="";
        result+=to_string(m_id)+"|";
        result+=m_name+"|";
        result+=to_string(m_s)+"|";
        result+=to_string(m_year)+"|";
        result+="Worker|";
        result+=to_string(m_salary)+"\n";
        return result;
    }
};

#endif // WORKER_H
