#ifndef JSONREADER_H
#define JSONREADER_H
#include "AbstractReader.h"
#include "Staffer.h"
#include <iostream>
#include <fstream>
#include <vector>
#include "json.hpp"
#include "readerexception.h"

using namespace std;
//using namespace nlohmann;

class JsonReader : public AbstractReader
{
public:
    nlohmann::json m_file;
    int current_index_=-1;
    //JsonReader();
    JsonReader(const std::string& file_name);
    friend JsonReader& operator>> (JsonReader &in, Staffer& staff);

    virtual bool is_open() override;
    virtual const vector<Staffer> read() override;
    operator bool() override;
private:
    std::ifstream m_myfile;


};

#endif // JSONREADER_H
