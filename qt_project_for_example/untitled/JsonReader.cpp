#include "JsonReader.h"
#include "Staffer.h"
#include "ReaderException.h"

using json = nlohmann::json;

//JsonReader::JsonReader(){}
JsonReader::JsonReader(const std::string& file_name): AbstractReader(file_name){m_f>>m_file;}

JsonReader& operator>> (JsonReader &in, Staffer& staff)
{
    in.current_index_++;
    if (in.current_index_>= static_cast<int>(in.m_file.size())) return in;
    json j = in.m_file.at(in.current_index_);
    staff.setID(j["id"].get<int>());
    staff.setName(j["name"].get<string>());
    staff.setSex(j["sex"].get<sex>());
    staff.setYear(j["year"].get<int>());
    return in;
}

bool JsonReader::is_open(){return m_f.is_open();}
const vector<Staffer> JsonReader::read()
{
    vector<Staffer> staff;
    for (auto s: m_file)
    {
        try
        {
            int id = s.at("id").get<int>();
            string name = s.at("name").get<string>();
            sex t_s = s.at("sex").get<sex>();
            int year = s.at("year").get<int>();
            staff.push_back(Staffer(id,name,t_s,year));
        }
        catch (json::type_error& e) {
            std::string err_str;
            err_str.append("JsonReader: ");
            err_str.append(e.what());
               throw ReaderException(err_str.c_str(),s.dump());
        }
    }
    std::sort(staff.begin(),staff.end());
    return staff;
}
JsonReader::operator bool()
{
     return current_index_ < static_cast<int>(m_file.size());
}

