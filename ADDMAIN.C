//program to add two numbers, all logic in main

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	c = a + b;
	printf("The result of addition is: %d",c);
	getche();
}