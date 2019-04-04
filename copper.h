#ifndef COPPER_H
#define COPPER_H
#include "metal.h"  //pour metal_t


class copper_t: public metal_t{
  char* name;
  char* symbol;

public:
  copper_t();
  // void afficher();
};

#endif
