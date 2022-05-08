#ifndef READEREXCEPTION_H
#define READEREXCEPTION_H
#include <exception>
#include <string>
#include <cstring>
using namespace std;

class ReaderException : public exception
{
public:
    ReaderException();
    ReaderException(const char* msg,string err_str);
    virtual const char* what() const noexcept;

private:
    std::string msg_;
    std::string err_str_;
};
#endif // READEREXCEPTION_H
