/***********************************************************
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
////////////////////////////////////////////////////////////
\\\\\\\\\\\\\\\\\\\created by destroyme_\\\\\\\\\\\\\\\\\\\\
//////////////////////pset1/cs50x///////////////////////////
\\\\\\\\\\\\\\\\\recreate the mario pyramid\\\\\\\\\\\\\\\\\
///////////////////at the end of world 1-1//////////////////
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
////////////////////////////////////////////////////////////
***********************************************************/


#include <stdio.h>
#include <cs50.h>

int main (void) {

    // Get user input of how tall the hash pyramid will be with restrictions
    int height;
    do {
        printf("How high will your pyramid be? ");
        height = GetInt();
        if (height == 0) {
            break;
        }
    } while (height < 1 || height > 23);
    
    // Print out the mario pyramid
    int i, space, hash;
    for (i = 0; i < height; i++) {
        
        // Print out spaces ahead of the hash utilizing i as the initialization
        for (space = i; space < (height - 1); space++) {
            printf(" ");
        }
        
        // Print out the hashes after the spaces starting initially with two
        for (hash = 0; hash < i + 2; hash++) {
            printf("#");
        }
        
        printf("\n");
    }
}
