#include <stdio.h>

/* Write a void function which has two float parameters. The function can do the
totoro operation on those parameters and it also prints out the result of the operation
on the screen.
The totoro operation does the following on two variables (let's say we have "a"
 and "b")
result = a*b+(a+b)+a*a*a+b*b*b+3.14159265358979
*/
void func(float a, float b){
	float result = a*b+(a+b)+a*a*a+b*b*b+3.14159265358979;
	printf("eredmeny: %f\n",result);

}
int main(){
	func(1.3,22.96);
    return 0;
}
