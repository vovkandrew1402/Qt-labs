#ifndef STAFFER_H
#define STAFFER_H

#include <string>
#include <vector>
#include "json.hpp"

using namespace std;

enum sex{male, female};

static int maxID = 1;

vector<string> split(const string& str, char delim);
class Staffer
{
protected:
    int m_id;
    string m_name;
    sex m_s;
    int m_year;

public:
    friend void from_json(const nlohmann::json& j, Staffer& staff);
    Staffer(int id, string name, sex s, int year);
    Staffer();
    Staffer(string name, sex s, int year);
    Staffer(const string& filename, char delim);
    Staffer(const Staffer&& s); // Move constructor
    Staffer(const Staffer& s); // Copy constructor
    void setID(int id);
    void setName (string name);
    void setYear (int year);
    void setSex (sex s);
    void set_max_id (int id);
    bool check_max_id(int id);
    int getID();
    string getName();
    int getYear();
    sex getSex();
    int generate_max_id();
    string repr();
    int string_to_typesint(string s);

    friend bool operator<(const Staffer& s1, const Staffer& s2);
    friend ostream& operator<<(ostream& os, const Staffer& s);
    void operator=(const Staffer& s1);
};
ostream& operator<<(ostream& os, const Staffer& s);
bool operator<(const Staffer& s1, const Staffer& s2);
//bool operator=(const Staffer& s1, const Staffer& s2);
#endif // STAFFER_H
