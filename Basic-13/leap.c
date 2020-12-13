#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d" , &year);

	// leap year if visible by 400 
	
	if(year % 400 == 0)
	{
		printf("%d is a leap year.",year);
	}

	// not a leap year if divisble by 100

	else if (year % 100  == 0) 
	{
		printf("%d is not a leap year.", year);
	}

	// leap year if not divisble by 100
	// but divisble by 4
	
	else if(year %4 == 0) 
	{
		printf("%d is a leap year.", year);
	}

	// all other years are not lleap year
	

	else {
		printf("%d is not a leap year.",year);
	}

	return 0;
}



