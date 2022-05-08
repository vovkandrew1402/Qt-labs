#ifndef CSVWRITER_H
#define CSVWRITER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <QString>
#include <QTextStream>
#include <QFile>
#include <Staffer.h>

using namespace std;

class CSVWriter
{
private:
    ofstream newFile;
public:
    CSVWriter(const string& name);
    void write(Staffer& S1);
};

#endif // CSVWRITER_H
