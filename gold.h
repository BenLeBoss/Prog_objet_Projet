#ifndef GOLD_H
#define GOLD_H
#include "metal.h"  //pour metal_t

class gold_t: public metal_t{
  char* name;
  char* symbol;

public:
  gold_t();
};

#endif
