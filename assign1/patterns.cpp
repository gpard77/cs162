/******************************************************
 *   Geoffrey Pard
 *   CS 162
 *   Date: 4/4/15
 *   
 *   Description: Implementation for Patterns.hpp
 ******************************************************/
#include <iostream>
#include "patterns.hpp"



/*********************************************************
 *               pattern1
 *
 * This turns cells on to dispaly the Fixed Simple
 *  Oscillator pattern
 ********************************************************/
void pattern1(bool array[20][40], int x, int y)
{
    array[y-1][x] = true;
    array[y][x] = true;
    array[y+1][x] = true;
}

/*********************************************************
 *               pattern2
 *
 * This turns cells on to dispaly the Glider pattern.
 ********************************************************/
void pattern2(bool array[20][40], int x, int y)
{
    array[y-2][x] = true;
    array[y-1][x] = true;
    array[y][x] = true;
    array[y][x-1] = true;
    array[y-1][x-2] = true;
}

/*********************************************************
 *               pattern3
 *
 * This turns cells on to dispaly the Cannon or Gun
 *  Glider pattern
 ********************************************************/
void pattern3(bool array[20][40])
{
    array[5][1] = true;
    array[6][1] = true;
    array[5][2] = true;
    array[6][2] = true;
    array[5][11] = true;
    array[6][11] = true;
    array[7][11] = true;
    array[4][12] = true;
    array[8][12] = true;
    array[3][13] = true;
    array[9][13] = true;
    array[3][14] = true;
    array[9][14] = true;
    array[6][15] = true;
    array[4][16] = true;
    array[8][16] = true;
    array[5][17] = true;
    array[6][17] = true;
    array[7][17] = true;
    array[6][18] = true;
    array[3][21] = true;
    array[4][21] = true;
    array[5][21] = true;
    array[3][22] = true;
    array[4][22] = true;
    array[5][22] = true;
    array[2][23] = true;
    array[6][23] = true;
    array[1][25] = true;
    array[2][25] = true;
    array[6][25] = true;
    array[7][25] = true;
    array[3][35] = true;
    array[4][35] = true;
    array[3][36] = true;
    array[4][36] = true;
}
