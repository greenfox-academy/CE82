#include <stdio.h>
#include <stdlib.h>

// Define the TOTORO macro which holds a number
#define TOTORO 2
int main()
{
    // Use the #if, #elif, #else macros
    // If the TOTORO macro is greater than 3 print out "Greater than 3"
    // If the TOTORO macro is lower than 3 print out "Lower than 3"	
	// Else print out "TOTORO is 3"
	#if (TOTORO>3)
    	printf("Greater than 3\n");
	#elif (TOTORO<3)
		printf("Lower than 3\n");
	#else
    	printf("TOTORO is 3\n");
	#endif
	
    return 0;
}
