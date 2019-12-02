#include<stdio.h>//if-else-if statement//
void main()
{
	int x;
	x = 0;
	printf("\nEnter choice (1 - 3) : ");
	scanf("%d", &x);
	if (x == 1)
	printf("\nchoice is 1");
	else if (x == 2)
	printf("\nchoice is 2");
	else if (x == 3)
	printf("\nchoice is 3");
	else
	printf("\nInvalid Choice");
}
