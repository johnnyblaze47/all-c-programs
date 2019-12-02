#include<stdio.h>
#include<stdlib.h>//continue statement//
main ()
{
	int num;
	for(num = 1; num <= 10; num ++)
	{
		if(num % 9 == 0)
		continue;
		printf("%d\t", num);
	}
}
