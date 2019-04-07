
#ifndef METAL_H
#define METAL_H
#include<string>
#include<sstream>
#include<iostream>
using namespace std;

class metal_t{
  float buy_price;
  float demand_quantity;
protected:
  string name;
  string symbol;
public:
  metal_t();

  //donne le prix
  float get_buy_price() const;

  //donne la quantité
  float get_demand_quantity() const;

  //donne son nom
  string get_name() const;

  //donne son symbole
  string get_symbol() const;

  //affiche les caract
  void handle_m() const;

  //égal au prix
  void handle_mbp(float price) const;

  ////sup ou égal au prix
  void handle_mbpge(float price) const;

  //sup au prix
  void handle_mbpgt(float price) const;

  //inf ou égal au prix
  void handle_mbple(float price) const;

  //inf au prix
  void handle_mbplt(float price) const;

  //égal a la quantité
  void handle_mdq(float qty) const;

  //sup et égal a la quantité
  void handle_mdqge(float qty) const;

  //sup a la quantité
  void handle_mdqgt(float qty) const;

  //inf et égal a la quantité
  void handle_mdqle(float qty) const;

  //inf a la quantité
  void handle_mdqlt(float qty) const;

  //affiche en fonction du nom
  void handle_mn(string name) const;

  //affiche en fonction du symbole
  void handle_ms(string symbol) const;

  //change le prix
  void set_buy_price(float buy_price);

  //change la quantité
  void set_demand_quantity(float demand_quantity);
};
ostream &operator<<(ostream &os, const metal_t &metal);
#endif
