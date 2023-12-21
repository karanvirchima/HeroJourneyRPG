#pragma once

#include "Character.hpp"
#include "Boss.hpp"

// creating the character Aqua Man and inheriting
class Aqua_Man : public Character
{
public:
// here it will generate the state for Aqua Man and set them to 0 until they are called
  Aqua_Man()
  {
    genRandomStats();
  }
  ~Aqua_Man()=default;

//setting the stats for Aqua Man
public:
  virtual void genRandomStats()
  {
    name = "Aqua Man";
    health = 200;
    maxHealth = health;
    setAttackDamage(rand() % 25 + rand() % 25); // randomize the amount of damage betweeen a range
    setSpecialAttackDamage(rand() % 50 + rand() % 25); // randomize the amount of damage betweeen a range
    setHeal(20 + rand() % 10);
  }
  // setting the attack for Aqua Man
  virtual void attack(Character *character)
  {
    int damage = getAttackDamage();
   Boss *bp = dynamic_cast<Boss *>(character); /*Dynamic cast is able to test while run time in the hierarchy. In this we have 
   different functions. If the dynamic cast passes and if not then its basic attack*/

   if (bp != nullptr) // if the boss point is not equal to a null pointer the damage will of the character will have a multiplier
   {
     damage *= 2; // multiplier to the damage
     std::cout << "Aqua pulled out all the stops, and attacked with his water cannon for " << damage << " damage." << std::endl;
    }
   else
   {
     std::cout << "Aqua Man attacked with his water canon and did " << damage << " damage." << std::endl;
   }
    character->decreaseHealth(damage);
    std::cout << "Enemy health = " << character->getHealth() << std::endl;
  }
    //setting the special attack for Aqua Man

  virtual void specialAttack(Character *character)
  {
    int damage = getSpecialAttackDamage();
    Boss *bp = dynamic_cast<Boss *>(character); /*Dynamic cast is able to test while run time in the hierarchy. In this we have 
   different functions. If the dynamic cast passes and if not then its basic attack*/

    if (bp != nullptr) // if the boss point is not equal to a null pointer the damage will of the character will have a multiplier
    {
      damage *= 2;
      std::cout << "Aqua Man pulled out all the stops, and attacked with his Special Trident and did " << damage << " damage." << std::endl;
    }
    else
    {
      std::cout << "Aqua Man attacked with his Special Trident and did " << damage << " damage." << std::endl;
    }

    character->decreaseHealth(damage);
    std::cout << "Enemy health = " << character->getHealth() << std::endl;
  }
      //setting the heal for Aqua Man

  virtual void heal(Character *character)
  {
    std::cout << "Aqua Man chose to heal and added " << getHeal() << " health." << std::endl;
    character->increaseHealth(getHeal());
  }
virtual void resetHealth() { health = maxHealth; }; // set his health back to reset after battle.
private:
  int maxHealth; // shows maxhealth
};

