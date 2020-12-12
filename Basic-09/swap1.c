#include<stdio.h>

int main()
{
	double a, b;
	printf("Enter value of a : ");
	scanf ("%lf", &a);
	printf("Enter value of b : ");
	scanf("%lf", &b);

	// Swap
	
	// a = (inital_a - initial_b)
	
	a =  a - b;

	//b = (initial_a - initial_b) + inital_b = initial_a
	
	b = a + b;

	// a = initial_a - (initial_a - initial_b) = initial_b
	
	printf("After swapping, a = %.2lf\n",a);
	printf("After swapping , b = %.2lf\n", b);

	return 0;

}
