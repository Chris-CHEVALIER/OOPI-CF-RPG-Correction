#include "Weapon.hpp"

Weapon::Weapon() {
  name = "epee en bois";
  damage = 10;
}

Weapon::Weapon(string newName, int newDamage) {
  name = newName;
  damage = newDamage;
}

void Weapon::change(string newName, int newDamage) {
  name = newName;
  damage = newDamage;
}

void Weapon::display() {
  cout << "Weapon name : " << name << " Damage : " << damage << endl;
}

const int Weapon::getDamage(){
  return damage;
}
