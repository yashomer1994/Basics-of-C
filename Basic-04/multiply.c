#include<stdio.h>

int main() 
{
	double a, b, p;
	printf("Enter the value of two numbers: ");
	scanf("%lf %lf",&a, &b);	//scans user input

	//Multiplication
	
	p = a * b;

	// Result up to 2 decimal point is displayed using %.2lf

	printf("P = %.2lf",p);
	return 0;
}
