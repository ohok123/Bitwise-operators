/*
Team members:           Luis Roman, Arturo Roman, Yicheng Feng, Nicholas Norado
Course Section:         001
Date:                   9/25/2019
Description:		The program prompts user to an input between 1 and 5 then a number between 1 and 4294967295. If number is not in either of these two range then prompts user to another input4294967295. 
			The input is used in a switch case to call 1 of 4 functions and pass in the number the user input. If 3 entered then user is asked for a number between 0 and 31 to be given to function Rotate. 
			Entering 5 will end program. 
 */
#include "major1.h"

int main()
{

        int choice = 0; // holds the choice of the user 1-5
		unsigned int input1 = 0; //input1 will be passed to one of the 4 functions
		int input2 = -1; //will be used for the rotate right input
		long long int maxV = 4294967295, truValue = 0; // maxV will be used to determine if the user number is a vlid unsigned int
		char inputArr[20]; // reading the user input as a character string
		int keepLooping = 0; // keep the while loop going

        while (choice != 5)
        {
                printf("Enter the menu options for the operation to perform:\n");
                printf("(1) Count Leading Zeroes\n(2) Endian Swap\n(3) Rotate-right\n(4) Parity\n(5) EXIT\n--> ");
                scanf("%d", &choice);
		if (choice > 0 && choice < 5) // only if their choice is valid will the prompt for the integer appear
		{
			while((keepLooping == 0))
		{
			printf("Enter a 32-bit number (>=1 and <= 4294967295, inclusively): ");
			scanf("%s", inputArr);

			truValue = atoll(inputArr); // string to long long assigned to truValue

			if (truValue <= maxV) // proceed if trueValue is less then or equal to maxV
			{
				if (truValue > 0) // proceed if trueValue is greater then 0 | 0 and negative numbers will not proceed
				{
					input1 = truValue; //since truevalue is less then the maxV it can be assigned to unsigned int
					keepLooping = 1; // exit the loop
				}
			}
		}
		}
                switch(choice)
                {
					case 1:	clz(input1); //Count Leading Zeroes
					break;
					case 2: EndianSwap(input1); // Endian Swap
					break;
					case 3: while ((input2 < 0) || (input2 > 31)) // only integers between 0 and 31
					{
						printf("Enter the number of positions to rotate-right the input (between 0 and 31,inclusively): ");
						scanf("%u", &input2);
					}
					Rotate(input1,input2); // Rotate-right
					input2 = -1; // reset input2
					break;
					case 4: parityFunction(input1); // Parity
					break;
					case 5: printf("Program terminating. Goodbye...\n");
					break;
					default: printf("Error: Invalid option. Please try again.\n");
					break;
                }
			keepLooping = 0;
        }

        return 0;
}

