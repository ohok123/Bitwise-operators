#include "major1.h"


void clz(unsigned int input1)
{
    int leadingzero=0;

    for(int n = 32 ; n > 1 ; n--)//loop for checking first n significant bits of number
    {
        unsigned int temp = input1 >> (n - 1);//variable temp holds the value of shifted user input
        if( temp & 1 )//if the first n significant bits number has an 1 at the least significant bit position, use bitwise & to check the value
        break;
        else
        {
                leadingzero++;
        }

    }
    printf("The number of leading zero is: %d\n" , leadingzero);
    return;
}