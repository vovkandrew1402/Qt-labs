#include "ReaderException.h"
ReaderException::ReaderException()
{

}

ReaderException::ReaderException(const char* msg,std::string err_str): msg_(msg),err_str_(err_str){

}
const char* ReaderException::what() const noexcept{
    string str = msg_+" In line:"+err_str_;
    return str.c_str();
}
