/*
Team members:		Luis Roman, Arturo Roman, Yicheng Feng, Nicholas Norado
Course Section:		001
Date:			9/25/2019
Description:		The fucntion parityFunction takes in an unsigned integer and checks if binary representation has an even or odd number of 1's, If even then returns 0 and if odd then 1

 */

#include "major1.h"


void parityFunction(unsigned int input)
{
	int parityCheck = 0;									//keep track of parity as we go through digits
	for(int i = 31; i >= 0; i--)								//go through all 32 digits in input
	{
		parityCheck = (((input >> i)& 1) ^ parityCheck);				//check if digit in position i is 1 or 0 and XOR it with parityCheck, 
												//if odd number of 1 then parity of 1 and if even number then parity of 0
	}
	printf("Parity of %u is %d.\n", input, parityCheck);					//print out results

};

