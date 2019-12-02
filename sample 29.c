#include<stdio.h>//Array initialization//
void main()
{
char alpha [26];
int i, j;
for(i=65, j=0; i<91; i++, j++)
{
	alpha[j] = i;
	printf("The charatcter now assigned is %c \n", alpha[j]);
	//displays characters corresponding to the ASCII table
}
getchar();
}
