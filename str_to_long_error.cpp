#include "str_to_long_error.h"
#include <sstream>// for ostringstream

str_to_long_error::str_to_long_error(string str)
{
  ostringstream oss;
  oss << "The string that cannot be converted " << str << "to a long";
  this->str = oss.str();
}

str_to_long_error::~str_to_long_error() throw()
{
  this->str.clear();
}

const char* str_to_long_error::what()const throw()
{
  return this->str.c_str() ;
}
