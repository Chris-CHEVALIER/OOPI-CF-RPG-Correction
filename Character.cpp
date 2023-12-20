#include "Character.hpp"
#include "Weapon.cpp"

using namespace std;

Character::Character() {
  name = "Tangui";
  life = 100;
  mana = 100;
}

Character::Character(string newName, int newMana, int newLife, Weapon newWeapon) {
  name = newName;
  mana = newMana;
  life = newLife;
  equippedWeapon = newWeapon;
}

void Character::receiveDamage(int damage) {
  life -= damage;
  if (life < 1) {
    life = 0;
  }
}

void Character::attack(Character &target) {
  target.receiveDamage(equippedWeapon.getDamage());
}

void Character::takeLifePotion(int lifePoints) {
  receiveDamage(-lifePoints); // dégâts négatifs
  if (life > 100) {
    life = 100;
  }
}

void Character::switchWeapon(string weaponName, int weaponDamage) {
  // equippedWeapon = Weapon(weaponName, weaponDamage);
  equippedWeapon.change(weaponName, weaponDamage);
}

bool Character::isAlive() { return life < 1; }

void Character::display() {
  cout << "name : " << name << " HP : " << life << " Mana " << mana << " Weapon : " << endl;
  equippedWeapon.display();
}

Character::~Character() {}