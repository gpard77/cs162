/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Tree class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Tree.hpp"


// Implementation for Class Tree
Tree::Tree()
{
   forward = Jims_Porch;
   back = Kitty_PH;
   left = NULL;
   right = NULL;

   setForward("Jims Porch");
   setBack("Kitty Penthouse");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Tree");
}

// Constructor with Gumbo arg.
Tree::Tree(Gumbo gumboIn)
{
   forward = Jims_Porch;
   back = Kitty_PH;
   left = NULL;
   right = NULL;

   setForward("Jims Porch");
   setBack("Kitty Penthouse");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Tree");
}

/********************************************************
 *              story
 *              
 * Story element for the Kitty Penthouse Room
 *******************************************************/
int Tree::story(Gumbo gumboIn)
{
   std::cout << "-------------------------------------------------" << std::endl;
   std::cout << "THE TREE: " << std::endl;
   std::cout << "Gumbo is not athletic, so he cannot get from" << std::endl;
   std::cout << "penthouse to porch wihtout injurying himself." << std::endl;
   std::cout << "Luckily, there is a tree that runs alongside " << std::endl;
   std::cout << "the house and provides a nice way to climb down." << std::endl;
   std::cout << "-------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "--------------------------------------------------" << std::endl;
   std::cout << "While in the tree, Gumbo comes across one of the" << std::endl;
   std::cout << "other creatures in the neighborhood, " << std::endl;
   std::cout << "a brown squirrel named Mac. " << std::endl;
   std::cout << "Mac appears hyped up, like he's got something" << std::endl;
   std::cout << "really important to say..." << std::endl;
   std::cout << "But then again, he's a squirrel--" << std::endl;
   std::cout << "his metabolism is insane! Better check though..." << std::endl;
   std::cout << "--------------------------------------------------" << std::endl;
   std::cout << std::endl;
   std::cout << "Move On to speak with Mac..." << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "---------------------------------------------------" << std::endl;
   std::cout << "\"Yo, Gumbo!  I see how Stabby treats you." << std::endl;
   std::cout << "It's not right.  You've got to get out of here." << std::endl;
   std::cout << "Start living like a proper feline...inside." << std::endl;
   std::cout << "You're kibble out here.\"" << std::endl;
   std::cout << "---------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   std::cout << "-----------------------------------------------------" << std::endl;
   std::cout << "\"Go get yourself a snack to power up." << std::endl;
   std::cout << "And here's a container to store some extra grub." << std::endl;
   std::cout << "I stole it.  It's some hollowed out pine cone" << std::endl;
   std::cout << "on a string.  Some idiot human hung it" << std::endl;
   std::cout << "to improve the decor of the outdoors or something." << std::endl;
   std::cout << "Fill it with food and you should have enough" << std::endl;
   std::cout << "strength to reach your goal..." << std::endl;
   std::cout << "Hang it around your neck, Gumbo!  Now scram!\"" << std::endl;
   std::cout << "-----------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   
   return 0;
}



