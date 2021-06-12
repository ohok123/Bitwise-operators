//	Arturo Roman | asr0156
//	3600.001 | 9-25-19
//	endian swap function will swap the leftmost 8 bits with the rightmost 8 bits
//	and the 8 bits the left of the middle with the 8 bits to the right of the middle


#include "major1.h"

void EndianSwap(unsigned int input1)
{
	unsigned int swapped, B0=input1, B1=input1, B2=input1, B3=input1; // swapped will be the final output and b 0~1 will hold the 4 bytes

	B0 = B0<<24; // move B3 to the B0 position anything to the right is overwritten and the left is filled with 0s
	B3 = B3>>24; // move B0 to the B3 position left is overwritten and the right is filled with 0s

	// before: 1 1 B2 1
	B1 = B1<<16; // overwrite the 1s/0s from the left filling the right with 0s
	B1 = B1>>24; // overwrite the 1s/0s from the right filling the left with 0s
	B1 = B1<<16; // place the old B2 in the B1 position
	// after: 0 B2 0 0

	//before: 1 B1 1 1
	B2 = B2<<8; // overwrite the left fill 0s to the right
	B2 = B2>>24; // overwrite the right fill 0s to the left
	B2 = B2<<8; // place the old B1 in the B2 position
	// after: 0 0 B1 0

	swapped=B0^B3^B1^B2; //XOR the B0-B3

	printf("Endian swap of %u gives %u\n", input1, swapped); // output
	
	return;
}
