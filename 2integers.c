//program to accept 2 integers from the user and calculate the product of them
#include<stdio.h>
int main()
{
	int a, b, product;
	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	product=a*b;
	printf("Product of 2 integers is:%d", product);
	return 0;
}
