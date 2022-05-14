//program to check whether a number is positive or negative
#include<stdio.h>
int main()
{
	int number;
	printf("Enter any number: ");
	scanf("%d", &number);
	if(number>=0)
	{
		printf("Number is positive");
	}
	else
	{
		printf("Number is negative");
	}
	return 0;
}