//program to check whether a number is divisible by 5 or not
#include<stdio.h>
int main()
{
	int number;
	printf("Input any number: ");
	scanf("%d", &number);
	if(number%5==0)
	{
		printf("Number is divisible by 5");
	}
	else
	{
		printf("Number is not divisible by 5");
	}
	return 0;
}