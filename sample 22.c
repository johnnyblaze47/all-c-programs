#include<stdio.h>
#include<stdlib.h>//random numbers(static random) //
int main()
{
	int cnt, x;
	for (cnt = 1; cnt <= 50; cnt ++)
	{
		x = rand() % 50 + 1;
		if (cnt == 45)
		break;
		printf("%d\n", x);
	}
	return 0;
} 
