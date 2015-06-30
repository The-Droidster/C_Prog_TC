#include <stdio.h>
#include <conio.h>

int login(char[], char[]);
int booking(int, int);
int bookmenu(int, int, int);
int logincheck(int);
void createuser();

int main(void)
{
    char user[10], pass[10];
    int logres, seats, bookres, bookch, loginch, usercheck;
    int maxseats = 20;
    system("cls");
    printf("\nWelcome to Railway booking system!\n");
    printf("1. Press 1 to Login if you have already signed up.\n");
    printf("2. Press 2 to Sign Up.\n\n");
    printf("Your Choice?: ");
    scanf("%d", &loginch);
    usercheck = logincheck(loginch);
    if(usercheck == 1)
    {
    A:
        printf("\nUser Login:\nPlease enter your username and password:\n");
        printf("Username: ");
        scanf("%s", user);
        printf("Password: ");
        scanf("%s", pass);
        logres = login(user, pass);
        if(logres == 1)
        {
            printf("Login successful!\n\nPlease proceed for booking!\n20 Seats available!");
            printf("\nPlease enter number of seats: ");
            scanf("%d", &seats);
            bookres = booking(seats, maxseats);
            if(bookres == 1)
            {
                printf("\nEnough seats available! Proceed for booking.\n\n");
                printf("Please select your class:\n");
                printf("1.Enter 1 for AC 1 Tier.\n");
                printf("2.Enter 2 for AC 2 Tier.\n");
                printf("3.Enter 3 for AC 3 Tier.\n");
                printf("4.Enter 4 for Sleeper.\n");
                printf("\nYour choice?: ");
                scanf("%d", &bookch);
                maxseats = bookmenu(bookch, seats, maxseats);
            }
            else
            {
                printf("Not enough seats!");
            }
        }
        else
        {
            printf("Invalid username or password!");
        }
    }
    else if(usercheck == 2)
    {
        createuser();
        system("cls");
        goto A;
    }
    printf("\n\nThank You for using the Railway booking system. Press any key to exit!");
    getche();
    return 0;
}

int login(char username[], char password[])
{
    if(!(strcmp(username, "Saurabh")) && !(strcmp(password, "Sau123")))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int booking(int seats, int maxseats)
{
    if(seats <= maxseats)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int bookmenu(int choice, int seats, int maxseats)
{
    switch(choice)
    {
    case 1:
    {
        printf("\n%d Seats booked in AC 1 Tier.", seats);
        maxseats = maxseats - seats;
        printf("\n%d seats remaining!", maxseats);
        break;
    }
    case 2:
    {
        printf("\n%d Seats booked in AC 2 Tier.", seats);
        maxseats = maxseats - seats;
        printf("\n%d seats remaining!", maxseats);
        break;
    }
    case 3:
    {
        printf("\n%d Seats booked in AC 3 Tier.", seats);
        maxseats = maxseats - seats;
        printf("\n%d seats remaining!", maxseats);
        break;
    }

    case 4:
    {
        printf("\n%d Seats booked in Sleeper coach!", seats);
        maxseats = maxseats - seats;
        printf("\n%d seats remaining!", maxseats);
        break;
    }

    default:
        printf("\nInvalid class!");
    }
    return maxseats;
}

int logincheck(loginchoice)
{
    switch(loginchoice)
    {
    case 1:
        return 1;

    case 2:
        return 2;

    default:
        printf("\nInvalid choice!");
        return 0;
    }
}

void createuser()
{
    char usern[10], passwd[10], name[100];
    printf("\nWelcome to new user creation module!\n\n");
    printf("Please enter your name: ");
    fflush(stdin);
    fgets(name, 100, stdin);
    strtok(name, "\n");
    printf("Please enter your desired username: ");
    scanf("%s", usern);
    printf("Please enter a password: ");
    scanf("%s", passwd);
    printf("New user '%s' successfully created! \n\nPress any key to proceed to login.\n", name);
    getch();
}