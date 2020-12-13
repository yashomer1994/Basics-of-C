#include<stdio.h>
int main() 
{
	double n1, n2, n3;
	printf("Enter the three numbers: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	// if n1 is greater than both n2 and n3, n1 is greatest
	

	if(n1 >= n2 && n2 >= n3)
		printf("%.2lf is the largest.", n1);
	// if n2 is greater than both n1 and n3, n2 is greatest
	

	if(n2 >= n1 && n2 >= n3)
		printf("%.2lf is the largest.", n2);

	// if both conditions are false, n3 is greatest
	
	else
		printf("%.2lf is the largest.", n3);

	return 0;

}
