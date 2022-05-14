//program to determine if a number is even or oddd
#include<stdio.h>
int main()
{
	int number;
	printf("Input any value: ");
	scanf("%d", &number);
	if(number%2==0)
	{
		printf("NUmber is even");
	}
	else
	{
		printf("Number is odd");
	}
	return 0;
}