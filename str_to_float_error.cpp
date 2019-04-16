#include "str_to_float_error.h"
#include <sstream>// for ostringstream


str_to_float_error::str_to_float_error(string str)
{
  ostringstream oss;
  oss <<"The string that cannot be converted " << str << "to a float";
  this->str = oss.str();
}

str_to_float_error::~str_to_float_error() throw()
{
  this->str.clear();
}

const char* str_to_float_error::what()const throw()
{
  return this->str.c_str() ;
}
