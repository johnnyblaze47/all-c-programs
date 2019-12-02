#include<stdio.h>
#include<stdlib.h>//random numbers(dynamic random)//
int main()
{
	int x, y;
	time_t t;
	y = 50;
	srand((unsigned) time(&t));
	for(x = 0; x <= y; x ++)
	{
		//x = rand() % 50 + 1;
		//if (x == 45)
		//break;
		//printf("%d\n", x);
		printf("%d\n", rand() % 50);
		if(x == 35)
		break;
	}
	return 0;
}
