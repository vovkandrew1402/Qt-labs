#ifndef ABSTRACTREADER_H
#define ABSTRACTREADER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Staffer.h"

using namespace std;

class AbstractReader
{
protected:
    ifstream m_f;
public:
    AbstractReader(const string& name);
    virtual const vector<Staffer> read() = 0;
    virtual bool is_open() = 0;
    virtual operator bool() = 0;

};

#endif // ABSTRACTREADER_H
