//Program to add two numbers, addition logic in separate add function

#include<stdio.h>
#include<conio.h>

int add(int, int); //function prototype

int add(int a, int b)  //function definition
{
	sleep(2);
	printf("\nInside add...\n");
	sleep(2);
	printf("calculating sum\n");
	sleep(2);
	printf("Returning to main()...\n");
	return a+b;
}

void main()
{
	int a,b,res;
	clrscr();
	printf("\nInside main()\n");
	sleep(1);
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	sleep(1);
	printf("\nCalling add()\n");
	res = add(a,b);
	sleep(2);
	printf("\nBack in main()\n");
	sleep(2);
	printf("The result of addition is: %d",res);

	getche();
}