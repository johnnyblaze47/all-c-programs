#include<stdio.h>
#include<stdlib.h>//Arrays: single dimensional array//
void main()
{
	int num[4];
	int i;
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[3] = 40;
	for (i = 0; i < 4; i ++)
	printf("\nNumber at [%d] is %d", i, num[i]);
}
