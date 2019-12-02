#include<stdio.h>//password check//
void main()
{
	int FB, FB1;
	printf("\nEnter password:");
	scanf("%d", &FB);
	printf("\nEnter password:");
	scanf("%d", &FB1);
	if (FB == FB1)
	printf("\nwelcome to your page");
	else 
	printf("\npassword does not match");
	}
