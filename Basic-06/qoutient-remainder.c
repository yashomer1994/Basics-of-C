#include<stdio.h>

int main()
{
	int dividend, divisor, qoutient, remainder;
	printf("Enter dividend: ");
	scanf("%d", &dividend);
	printf("Enter divisor: ");
	scanf("%d", &divisor);


	// Computes quotient

	qoutient = dividend / divisor;

	// Computes remainder
	
	remainder = dividend  % divisor;

	printf("Quotient = %d\n", qoutient);
	printf("Remainder = %d\n", remainder);

	return 0;

}
