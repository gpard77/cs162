/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: Assignment 3 - Inheritance
 *   This class "Fantasy_Man" will serve as the base
 *   class for the project.  All other classes
 *   of fantasy men will inherit from this class. 
 *   This is the header file.
 *****************************************************/
#ifndef FANTASY_MAN_HPP
#define FANTASY_MAN_HPP

#include <string>

enum Character {GOBLIN, BARBARIAN, REPTILE_PEOPLE, BLUE_MEN, THE_SHADOW};

class Fantasy_Man
{
protected:
   int strength;
   int armor;
   std::string name;
   //const std::string thing_name[] = {"Goblin", "Barbarian", "Reptile Person", "Blue Man", "The Shadow"}; 

public:
   Fantasy_Man();
   Fantasy_Man(int, int, std::string);
   void setStrength(int);
   int getStrength();
   void setArmor(int);
   int getArmor();
   void setName(std::string);
   std::string getName();
   virtual int attack() = 0;
   virtual int defend() = 0;
   void damage(Fantasy_Man *, Fantasy_Man *);
   void tale_of_tape(Fantasy_Man *, Fantasy_Man *);
   void decision(Fantasy_Man *, Fantasy_Man *);
};
#endif

