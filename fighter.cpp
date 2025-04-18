#include <iostream>
#include <string>

class Fighter {
private:
  std::string name;
  int health;
  int damagePerAttack;

public:
  Fighter(std::string name, int health, int damagePerAttack) {
    this->name = name;
    this->health = health;
    this->damagePerAttack = damagePerAttack;
  }

  ~Fighter() {};
  std::string getName() { return name; }

  int getHealth() { return health; }

  int getDamagePerAttack() { return damagePerAttack; }

  void setHealth(int value) { health = value; }
};

std::string declareWinner(Fighter *fighter1, Fighter *fighter2,
                          std::string firstAttacker) {
  // I will create a turn variable that tells who will deliver the current
  // punch, and then alternate its values.
  bool turn;
  if (firstAttacker == fighter1->getName()) {
    turn = true;
  } else {
    turn = false;
  }
  std::cout << firstAttacker << " " << fighter1->getName();
  std::cout << turn << "\n";

  while (fighter1->getHealth() > 0 && fighter2->getHealth() > 0) {
    std::cout << turn << " ";
    turn ? fighter2->setHealth(fighter2->getHealth() -
                               fighter1->getDamagePerAttack())
         : fighter1->setHealth(fighter1->getHealth() -
                               fighter2->getDamagePerAttack());
    turn ? turn = false : turn = true;
  }
  return turn ? fighter2->getName() : fighter1->getName();
}

int main() {
  Fighter fighter1("Harald", 20, 5);
  Fighter fighter2("Harry", 5, 4);
  std::cout << declareWinner(&fighter1, &fighter2, "Harry");
  return 0;
}
