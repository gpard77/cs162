/**************************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/18/15
 *
 * Description: Implementation for ClubPrice.hpp
 *************************************************************/
#include <iostream>
#include "clubPrice.hpp"
#include "Item.hpp"

using std::cout;
using std::cin;
using std::endl;


/**************************************************************
 *                       calcClubPrice
 *
 * This method computes the appropriate discount for shoppers
 * with a club card.  Discount is 10%.
 **************************************************************/
double ClubPrice::calcClubPrice(double priceIn)
{
   // Current discount is 10%
   double discounted = 0.90;
  
   priceIn = (priceIn * discounted);
   return priceIn;
   
} 
