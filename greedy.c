/***********************************************************
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
////////////////////////////////////////////////////////////
\\\\\\\\\\\\\\\\\\\created by destroyme_\\\\\\\\\\\\\\\\\\\\
//////////////////////pset1/cs50x///////////////////////////
\\\\\\\\\\\\\\\\\utilize the greedy algorithim\\\\\\\\\\\\\\
///////////////////to produce coin change///////////////////
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
////////////////////////////////////////////////////////////
***********************************************************/


#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void) {
    // Get the amount needed to return in coins
    float cash;    
    do {
        printf("O hai! How much change is owed?\n");
        cash = GetFloat();
    } while (cash < 0);
    
    // Round the input to reduce floating point impercision
    cash = roundf(cash*100);
     
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    // Get the amount of quarters
    while (cash - 25 >= 0) {
        quarters = quarters + 1;
        cash = cash - 25;
    } 
        
    // Get the amount of dimes
    while (cash - 10 >= 0) {
        dimes = dimes + 1;
        cash = cash - 10;
    }
    
    // Get the amount of nickels
    while (cash - 5 >= 0) {
        nickels = nickels + 1;
        cash = cash - 5;
    } 
    
    // Get the amount of pennies
    while (cash > 0) {
        pennies = pennies + 1;
        cash = cash - 1;
    }

    
    int output = quarters + dimes + nickels + pennies;  
    printf("%i\n", output);
}
