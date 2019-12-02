#include<stdio.h>
#include<string.h>
#include<conio.h>//login check//
void main()
{
	char username[20];
	char password[8];
	int i;
	printf("Enter username : ");
	scanf("%s", &username);
	printf("Enter password : ");
	for (i = 0; i<8; i++)
	{
		password[i] = getch();
		printf("*");
	}
	password[i] = '\0';
	
	printf("\n\nPress any key to continue");
	getch();
	
	if (!strcmp(username, "johnny") && !strcm(password, "flame234"))
	{
		printf("\n\nLogin successful");
	}
	else
	{
		printf("\n\nIncorrect username or password");
	}
	
	
	
	}
