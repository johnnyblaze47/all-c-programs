#include<stdio.h>
#include<stdlib.h>//Exit function 1//
main ()
{
	int num;
	for(num = 1; num <= 10; num ++)
	{
		if(num % 9 == 0)
		exit(0);
		printf("%d\t", num);
	}
}
