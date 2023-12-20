#include "Weapon.hpp"
#include <iostream>
#pragma once

using namespace std;

class Character {
private:
  string name;
  int life;
  int mana;
  Weapon equippedWeapon;

public:
  Character();
  Character(string newName, int newLife, int newMana, Weapon newWeapon);
  void receiveDamage(int damage);
  void attack(Character &target);
  void takeLifePotion(int lifePoints);
  void switchWeapon(string weaponName, int weaponDamage);
  bool isAlive();
  void display();
  ~Character();
};
