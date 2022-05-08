#include "CSVReader.h"
#include "Staffer.h"
#include "ReaderException.h"

CSVReader::CSVReader(const string& name): AbstractReader(name){}
bool CSVReader::is_open() {return m_f.is_open();}

const vector<Staffer> CSVReader::read()
{
    vector<Staffer> staff;
    string str;

    while (getline(m_f,str))
    {
        Staffer st;
        vector<string> str_line = split(str,';');
        try {
            st = Staffer(stol(str_line[0]),
                    str_line[1],
                    static_cast<sex>(stoi(str_line[2])),
                    stoi(str_line[3]));
        }  catch (invalid_argument &ex) {
            throw ReaderException("StoiException(CsvReader)",str);
        }
        staff.push_back(move(st));
    }
    return staff;
}

CSVReader::operator bool()
{
    return m_fin.eof();
}

CSVReader& operator>> (CSVReader &in, Staffer &staff)
{
    string str;
    in.m_f >> str;
    if (str == "") return in;
    std::vector<std::string> str_line = split(str,';');
    staff.setID(std::stol(str_line[0]));
    staff.setName(str_line[1]);
    staff.setSex(static_cast<sex>(stoi(str_line[2])));
    staff.setYear(std::stoi(str_line[3]));
    return in;
}
