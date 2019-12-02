#include<stdio.h>//5th november, 2019: loop 3 for factorial of a number//
int main()
{
	int count, n, fact = 1;
	printf("\nEnter a number to find factorial: ");
	scanf("%d", &n);
	for (count = 1; count<=n; count++)
	fact = fact * count;
	printf("The factorial of %d = %d", n, fact);
	return 0;
}
