#include<stdio.h>

int main() 
{
	int intT;
	float floatT;
	double doubleT;
	char charT;

	// Sizeof evaluates the size of a variable
	

	printf("Size of int: %zu bytes\n", sizeof(intT));
	printf("Size of float : %zu bytes\n", sizeof(floatT));
	printf("Size of double : %zu bytes\n", sizeof(doubleT));
	printf("Size of char : %zu bytes\n", sizeof(charT));

	return 0;
}


