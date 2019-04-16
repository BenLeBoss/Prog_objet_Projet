#include "str_to_int_error.h"
#include <sstream>// for ostringstream


str_to_int_error::str_to_int_error(string str)
{
  ostringstream oss;
  oss <<"The string that cannot be converted " << str << "to a int";
  this->str = oss.str();
}

str_to_int_error::~str_to_int_error() throw()
{
  this->str.clear();
}

const char* str_to_int_error::what()const throw()
{
  return this->str.c_str() ;
}
