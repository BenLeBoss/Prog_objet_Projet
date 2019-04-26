#include <iostream>  //cout
//#include <stdio.h>
#include <string.h>  //strcmp
#include <string>  //caract
#include<pugixml.hpp>  //parcours xml
using namespace std;

#include "copper.h"
#include "gold.h"
#include "silver.h"
#include "metal.h"
#include "refinery.h"
#include "str_to_float_error.h"
#include "str_to_int_error.h"
#include "str_to_long_error.h"

int main(int argc, char *argv[]){

int i,j,n;
char tab[50], tab2[50];
refinery_t refinery;
char* endptr = NULL;
float price=0, qty=0;
string name, symbol;

do{
  i=0;
  j=0;
  n=0;
  cout << "MRP> ";
  fgets(tab, 30, stdin);

  while (tab[i]!='\0') {   //tant que la ligne n'est pas finie ou changée

    if(tab[i]==' '){
      tab[i]='\0';
      n=0;
    }

    i++;

    if (tab[i]=='\n'){
      tab[i]='\0';
    }

    if (!n) {
        tab2[j]=tab[i];
        j++;
    }
  }//tant que la ligne n'est pas finie ou changée
  if(strcmp(tab,"help")){
    cout << "addr: prints the refinery address" << endl;
    cout << "contact: prints the refinery contact information" << endl;
    cout << "help: prints this help" << endl;
    cout << "m: prints the refinery metals" << endl;
    cout << "mail: prints the refinery mail address" << endl;
    cout << "mbp PRICE: prints the refinery metals with the buy price equal to PRICE" << endl;
    cout << "mbpge PRICE: prints the refinery metals with the buy price greater than or equal to PRICE" << endl;
    cout << "mbpgt PRICE: prints the refinery metals with the buy price greater than PRICE" << endl;
    cout << "mbple PRICE: prints the refinery metals with the buy price less than or equal to PRICE" << endl;
    cout << "mbplt PRICE: prints the refinery metals with the buy price less than PRICE" << endl;
    cout << "mdq QTY: prints the refinery metals with the demand quantity equal to QTY" << endl;
    cout << "mdqge QTY: prints the refinery metals with the demand quantity greater than or equal to QTY" << endl;
    cout << "mdqgt QTY: prints the refinery metals with the demand quantity greater than QTY" << endl;
    cout << "mdqle QTY: prints the refinery metals with the demand quantity less than or equal to QTY" << endl;
    cout << "mdqlt QTY: prints the refinery metals with the demand quantity less than QTY" << endl;
    cout << "mn NAME: prints the refinery metals with the name containing NAME" << endl;
    cout << "ms SYMBOL: prints the refinery metals with the symbol containing SYMBOL" << endl;
    cout << "quit: quits MRP" << endl;
    cout << "r: prints the refinery information" << endl;
    cout << "version: prints the MRP version" << endl;
    cout << "web: prints the refinery web address" << endl;
  }
  else if(strcmp(tab,"addr")){
    refinery.handle_addr();
  }
  else if(strcmp(tab,"contact")){
    refinery.handle_contact();
  }
  else if(strcmp(tab,"m")){
    refinery.handle_m();
  }
  else if(strcmp(tab,"mail")){
    refinery.handle_mail();
  }
  else if(strcmp(tab,"mbp")){
    price = strtod((char*)tab2,&endptr);
    refinery.handle_mbp(price);
  }
  else if(strcmp(tab,"mbpge")){
    price = strtod((char*)tab2,&endptr);
    refinery.handle_mbpge(price);
  }
  else if(strcmp(tab,"mbpgt")){
    price = strtod((char*)tab2,&endptr);
    refinery.handle_mbpgt(price);
  }
  else if(strcmp(tab,"mbple")){
    price = strtod((char*)tab2,&endptr);
    refinery.handle_mbple(price);
  }
  else if(strcmp(tab,"mbplt")){
    price = strtod((char*)tab2,&endptr);
    refinery.handle_mbplt(price);
  }
  else if(strcmp(tab,"mdq")){
    qty = strtod((char*)tab2,&endptr);
    refinery.handle_mdq(qty);
  }
  else if(strcmp(tab,"mdqge")){
    qty = strtod((char*)tab2,&endptr);
    refinery.handle_mdqge(qty);
  }
  else if(strcmp(tab,"mdqgt")){
    qty = strtod((char*)tab2,&endptr);
    refinery.handle_mdqgt(qty);
  }
  else if(strcmp(tab,"mdqle")){
    qty = strtod((char*)tab2,&endptr);
    refinery.handle_mdqle(qty);
  }
  else if(strcmp(tab,"mdqlt")){
    qty = strtod((char*)tab2,&endptr);
    refinery.handle_mdqlt(qty);
  }
  else if(strcmp(tab,"mn")){
    name = strtod((char*)tab2,&endptr);
    refinery.handle_mn(name);
  }
  else if(strcmp(tab,"ms")){
    symbol = strtod((char*)tab2,&endptr);
    refinery.handle_ms(symbol);
  }
  else if(strcmp(tab,"r")){
    refinery.handle_r();
  }
  else if(strcmp(tab,"version")){
    cout << "MRP (Metal Refinery Program) 20190324 \n\n Copyright (C) 2019 Coppens Bioux Benjamin and Mazerolles Nathan.\n"
    << endl << "Written by Coppens Bioux Benjamin <benjamin.coppens-bioux@etud.univ-pau.fr> and Mazerolles Nathan <nathan.mazerolles@etud.univ-pau.fr>."
    << endl;
  }
  else if(strcmp(tab,"web")){
    refinery.handle_web();
  }
  else if(strcmp(tab,"quit")){
    n=1;
  }
}while(n!=1);
}
