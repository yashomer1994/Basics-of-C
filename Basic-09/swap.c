#include<stdio.h>

int main() 
{
	double first, second, temp;
	printf("Enter the first number : ");
	scanf("%lf" , &first);
	printf("Enter the second number : ");
	scanf("%lf", &second);

	// First number is assinged to the temp
	
	temp = first;

	// Second value is assigned to the first 
	
	first= second;

	// Value of temp ( initial value of first) is assigned to second
	
	second = temp;

	printf("\n After swapping , first number = %.2lf\n", first);
	printf("\n After swapping, second number = %.2lf\n", second);

	return 0;

}
