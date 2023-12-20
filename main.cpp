#include "Character.cpp"

using namespace std;

int main() {

  Weapon woodenSword;
  Weapon p220("P220", 2);
  Character tangui("Tangui", 20, 100, woodenSword);
  Character michel("Michel", 10, 100, p220);

  tangui.display();
  michel.display();

  tangui.attack(michel);
  michel.display();
  michel.takeLifePotion(20);
  michel.display();
  michel.attack(tangui);
  tangui.display();
  


  return 0;
}