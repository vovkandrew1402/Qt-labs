#ifndef CSVREADER_H
#define CSVREADER_H

#include <vector>
#include <fstream>
#include "Staffer.h"
#include "AbstractReader.h"

using namespace std;



class CSVReader : public AbstractReader
{
public:
    CSVReader(const string& name);
    bool is_open() override;
    operator bool() override;
    friend CSVReader& operator>> (CSVReader &in, Staffer &staff);
    const vector<Staffer> read() override;
};

#endif // CSVREADER_H
