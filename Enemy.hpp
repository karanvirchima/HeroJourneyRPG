#pragma once
#include <string>
#include <iostream>

#include "Character.hpp"

using std::string;
using std::cout;
using std::cerr;
// inherertiance between character and enemy
class Enemy : public Character
{
private:
  int attackDamage;
  int attackSpecialDamage;
  int healthIncrease;
  int health;
  int maxHealth;
  int randomNumber(int low, int high);

public:
  Enemy(); // created and added desconstructor for enemy
  ~Enemy()=default;
  virtual void genRandomStats();
  int decideAction(Character *character);
  virtual void attack(Character *character);
  virtual void specialAttack(Character *character);
  virtual void heal(Character *character);

public: 
  virtual int getAttackDamage() const { return attackDamage; }
  virtual int getSpecialAttackDamage() const { return attackSpecialDamage; }
  virtual int getHealth() const { return health; }
  virtual int getMaxHealth() const { return maxHealth; }
  virtual int getHeal() const { return healthIncrease; }

public:                                              
  virtual void resetHealth() { health = maxHealth; };
  virtual void decreaseHealth(int damage) {
    health -= damage;
    }
  virtual void increaseHealth(int healing) { health += healing; }
};

#include "Enemy.hpp"
// setting random stats
Enemy::Enemy()
{
  genRandomStats();
}

void Enemy::genRandomStats()
{
  attackDamage = abs(rand() % 25) + 25; //randomize the attack between a range
  attackSpecialDamage = abs(rand() % 25) + 50; //randomize the special 
  healthIncrease = abs(rand() % 25) + 1; // randomize the amount the enemy will heal
  health = 150; // setting the health to the enemy
  maxHealth = health;
}

int Enemy::decideAction(Character *character) //allows the range of what type of attack will be used. 
{
  int decision = abs(rand() % 10); 
  if (0 <= decision && decision <= 8)
  {
    attack(character);
  }
  else if (9 <= decision && decision <= 10)
  {
    specialAttack(character);
  }
  return decision;
}

void Enemy::attack(Character *character) 
{
  int damage = getAttackDamage();
  std::cout << "Enemy attacked with his Basic Attack and did " << getAttackDamage() << " damage." << std::endl; //output after the attack
  character->decreaseHealth(damage);
  cout << character->name << "'s Health = " << character->getHealth() << std::endl << std::endl; // outputs the remaining health.

}

void Enemy::specialAttack(Character *character)
{
  int damage = getSpecialAttackDamage();
  std::cout << "Enemy attacked with his Special Attack and did " << getSpecialAttackDamage() << " damage." << std::endl; //output after the special attack
  character->decreaseHealth(damage);
  cout << character->name << "'s Health = " << character->getHealth() << std::endl << std::endl; // outputs the remaining health.
}

void Enemy::heal(Character *character)
{
  int healing = randomNumber(getHeal() - 2, getHeal() + 2);
  std::cout << "Enemy chose to heal and added " << healing << " health." << std::endl; //output after the heal
  character->increaseHealth(healing); // outputs the remaining health.
}

int Enemy::randomNumber(int low, int high) //randomizes the health and damage for the enemy. 
{
  srand(time(0));
  return (rand() % (high - low + 1));
}


