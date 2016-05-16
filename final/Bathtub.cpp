/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Bathtub class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Bathtub.hpp"


// Implementation for Class Bathtub

Bathtub::Bathtub()
{
   forward = NULL;
   back = Office_Closet;
   left = Bed;
   right = NULL;

   setForward("CLOSED");
   setBack("Office Closet");
   setLeft("Bed");
   setRight("CLOSED");

   setName("Bathtub");
}

// Constructor with Gumbo arg.
Bathtub::Bathtub(Gumbo gumboIn)
{
   forward = NULL;
   back = Office_Closet;
   left = Bed;
   right = NULL;

   setForward("CLOSED");
   setBack("Office Closet");
   setLeft("Bed");
   setRight("CLOSED");

   setName("Bathtub");
}

/********************************************************
 *              story
 *              
 * Story element for hiding in the Bathtub
 *******************************************************/
int Bathtub::story(Gumbo gumboIn)
{
   std::cout << "---------------------------------------------------------------------" << std::endl;
   std::cout << "BATHTUB:" << std::endl;
   std::cout << "Gumbo looks at the water for a moment; knows he has no choice." << std::endl;
   std::cout << "He closes his eyes and splats into the water." << std::endl;
   std::cout << "Hey, it's pretty warm--not so bad.  And bubbles! Glorious bubbles!" << std::endl;
   std::cout << "It smells so good.  Gumbo splashes in the tub, rolls around." << std::endl;
   std::cout << "He hears yelling down the stairs, the more Stabby runs, the cleaner" << std::endl;
   std::cout << "Gumbo can get..." << std::endl;
   std::cout << "--------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "----------------------------------------------------------------------" << std::endl;
   std::cout << "Gumbo gets as clean as he can.  Now he must dry himself" << std::endl;
   std::cout << "The activity downstairs has quieted--Stabby has been tossed out." << std::endl;
   std::cout << "Gumbo needs to fluff up in a hurry.  To do this he must use." << std::endl;
   std::cout << "up the rest of his speed points so he can flash shake the water off." << std::endl;
   std::cout << "----------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   std::cout << "**MOVE ON TO USE SPEED POINTS**" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();

   // Adjust Gumbo Traits
   gumboIn.setSpeed(0);
   gumboIn.tale_of_tape(gumboIn);
   std::cout << std::endl;
   moveOn2();
   whitespace();

   // Guess the Magic Number
   int value;
   value = guessNum();

   if (value == 5)
   {
      std::cout << "----------------------------------------------------------" << std::endl;
      std::cout << "Gumbo lost his stamina and fell asleep looking like a" << std::endl;
      std::cout << "wet rat.  The homeowner is disgusted and Gumbo is tossed" << std::endl;
      std::cout << "back outside." << std::endl;
      std::cout << "GAME OVER..." << std::endl;
      std::cout << "----------------------------------------------------------" << std::endl;
      return value;
   }

   moveOn2();
   whitespace();
   std::cout << "------------------------------------------------" << std::endl;
   std::cout << "Gumbo did it! He is dry and cute." << std::endl;
   std::cout << "Move on to claim your prize!" << std::endl;
   std::cout << "------------------------------------------------" << std::endl;
   std::cout << std::endl;

   return 0;
}

int Bathtub::guessNum()
{
   std::cout << "-----------------------------------------------------------" << std::endl;
   std::cout << "Gumbo might have enough speed to get dry, but does he" << std::endl;
   std::cout << "have the stamina?  He really needs to ploof up!  That makes" << std::endl;
   std::cout << "him cute to the homeowner." << std::endl;
   std::cout << "-----------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "------------------------------------------------------------------" << std::endl;
   std::cout << "Guess the magic number and Gumbo has eternal stamina to meet" << std::endl;
   std::cout << "his goal.  But each time you take a turn the slower he spins." << std::endl;
   std::cout << "If you take more than five turns, the homeownver finds you" << std::endl;
   std::cout << "before you're cute--throws you out." << std::endl;
   std::cout << "------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   std::cout << "-------------------------------------------------------------------" << std::endl;
   std::cout << "Numbers range from 1 - 10." << std::endl;
   std::cout << "Get ready to guess..." << std::endl;
   std::cout << "-------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   

   int num, guess, numGuess;
   //srand(time(NULL));  //seed random number

   num = rand() % 11;  //set number range

   //Create loop to increment number of guesses
   for (numGuess =1; guess != num && numGuess < 6; numGuess++)
   {
      std::cout << "Enter a guess between 0-10: ";
      // Make sure input is a number
      while (!(std::cin >> guess))
      {
         std::cout << "Invalid Input.  Please ";
         std::cout << "enter a number: ";
         std::cin.clear();
         std::cin.ignore(100, '\n');
      } 
 
      // Start sequence that guides user to correct guess
      if(guess == num) //To specify winning guess
      {  
         std::cout << "You got it!" << std::endl;
         std::cout << "It took you " << numGuess << " guesses." << std::endl;
         return 0;
      }
      else if (guess > 10 || guess < 0) //Keep numbers in range
      {
         std::cout << "Invalid Guess: keep numbers between 0-10." << std::endl;
      }
      else if (guess < num)
      {
         std::cout << "Your guess is too low." << std::endl;
      }
      else if (guess > num)
      {
         std::cout << "Your guess is too high." << std::endl;
      }
   }

   int failNum = 5;
   if (numGuess == 5)
   {
      return failNum;
   }
  
   return 0;
   
}
