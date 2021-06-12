#include "major1.h"
#define INT_BITS 32


//Rotates the function right
void Rotate(unsigned int input1, unsigned int input2)
{

    int rotate = (input1 << (INT_BITS - input2));
    printf("%u rotated by %u postion gives: %u.\n",input1,input2,rotate);
    return;

}

