#include <Staffer.h>

using namespace std;

vector<string> split(const string& str, char delim)
{
    vector<string> tokens;
    if (str.empty())
        return tokens;
    else
    {
        size_t start = 0, end = str.find(delim, start);
        do
        {
           end = str.find(delim, start);
           if (start != end)
              tokens.push_back(str.substr(start, (end - start)));
          start = end + 1;
        }while (end != string::npos);
    }
    return tokens;
}

    void from_json(const nlohmann::json& j, Staffer& staff)
    {
    int n = 0;
    j.at("ID").get_to(n);
    staff.setID(n);
    string str;
    j.at("Name").get_to(str);
    staff.setName(str);
    j.at("Sex").get_to(str);
    staff.setSex(sex(staff.string_to_typesint(str)));
    j.at("Year").get_to(n);
    staff.setYear(n);
    }

    Staffer::Staffer(int id, string name, sex s, int year):m_id (id), m_name(name), m_s(s), m_year(year){
        if (!check_max_id(id))
            set_max_id(id);
    }
    Staffer::Staffer(){}
    Staffer::Staffer(string name, sex s, int year):m_name(name), m_s(s), m_year(year)
    {
        setID(generate_max_id());
    }
    Staffer::Staffer(const string& filename, char delim)
    {
        vector<string> str = split(filename,delim);
        setID(stoi(str[0]));
        setName(str[1]);
        setSex(static_cast<sex>(stoi(str[2])));
        setYear(stoi(str[3]));
        if (!check_max_id(stoi(str[0])))
            set_max_id(stoi(str[0]));
    }
    Staffer::Staffer(const Staffer&& s):m_id(s.m_id), m_name(s.m_name), m_s(s.m_s), m_year(s.m_year){} // Move constructor
    Staffer::Staffer(const Staffer& s):m_id(s.m_id), m_name(s.m_name), m_s(s.m_s), m_year(s.m_year){} // Copy constructor
    void Staffer::setID(int id) {m_id = id;}
    void Staffer::setName (string name) {m_name = name;}
    void Staffer::setYear (int year) {m_year = year;}
    void Staffer::setSex (sex s) {m_s = s;}
    void Staffer::set_max_id (int id) {maxID = id;}
    bool Staffer::check_max_id(int id) {return maxID > id;}
    int Staffer::getID() {return m_id;}
    string Staffer::getName() {return m_name;}
    int Staffer::getYear() {return m_year;}
    sex Staffer::getSex() {return m_s;}
    int Staffer::generate_max_id()
    {
        maxID = maxID + 1;
        return maxID;
    }
    string Staffer::repr()
    {
        string result="";
        result+=to_string(m_id)+"|";
        result+=m_name+"|";
        result+=to_string(m_s)+"|";
        result+=to_string(m_year)+"|";
        result+="Staffer\n";
        return result;
    }
    int Staffer::string_to_typesint(string s)
    {
        if (s == "female")
            return 0;
        return 1;
    }

    ostream& operator<< (ostream &out, const Staffer& staff){
        out << to_string(staff.m_id) << ';' << staff.m_name<<';' << to_string(staff.m_s) << ';' << to_string(staff.m_year);
        return out;
    }
    bool operator<(const Staffer& s1, const Staffer& s2)
    {
        return s1.m_year < s2.m_year;
    }
    void Staffer::operator=(const Staffer& s1)
    {
        m_id = s1.m_id;
        m_name = s1.m_name;
        m_s = s1.m_s;
        m_year = s1.m_year;
    }

