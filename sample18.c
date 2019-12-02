#include<stdio.h>//while loop//
int main()
{
	int i, j, fact;
	i = 1;
	printf("Enter a number to find the factorial:\n");
	scanf("%d", &j);
	while (i <=j)
	{//loop begins here//
		fact = fact*i;
		i++;
	}//loop ends here//
	printf("The factorial of %d = %d", j, fact);
	return 0;
	}

