#include<stdio.h>
#include<conio.h>

int login(int,int);

void main()
{
	int user,pass,loginch;
	int count = 0;
	clrscr();
	do
	{
		clrscr();
		printf("\nWelcome to login module!\n");
		printf("========================");
		printf("\n\nCaution : You will locked out after 3 unsuccessful login attempts!");
		printf("\n\n===>Login attempts remaining: %d",3-count);
		printf("\n\nPlease Enter your username and password!\n\n");
		printf("Username: ");
		scanf("%d",&user);
		printf("Password: ");
		scanf("%d",&pass);
		loginch = login(user,pass);
		if(loginch == 1)
		{
			printf("\nlogin successful! You got it bitch ;-P! Thank You for using the system!");
			break;
		}
		else
		{
			count++;
			if(count == 3)
			{
				printf("\n===>Still invalid Muthafucka! Max login attempts exceeded! GTFO :-D");
			}
			else
			{
				printf("\n===>Invalid Username or Password! Please try again!...");
				printf("\n");
				system("pause");
				continue;
			}
		}
	}
	while(count <= 2);

	getche();
}

int login(int usr, int pwd)
{
	if(usr == 123 && pwd == 456)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
