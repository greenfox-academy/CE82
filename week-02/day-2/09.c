#include <stdio.h>

int main() {
	int i = 53625;
	// tell if it has 11 as a divisor
	if(i%11) printf("nem osztoja %d\n", (i%11));
	else printf("osztoja\n");
	return 0;
}

//printf("%d\n",b);
