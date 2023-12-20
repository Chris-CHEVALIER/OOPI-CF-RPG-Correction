#include <iostream>
#pragma once

using namespace std;

class Weapon {
private:
  string name;
  int damage;

public:
  Weapon();
  Weapon(string newName, int newDamage);
  void change(string newName, int newDamage);
  void display();
  const int getDamage();
};