/*inplement area = l * b*/
#include<stdio.h>
int main()
{
	int l, b, A;
	printf("\nEnter the value of the length: ");
	scanf("%d", &l);
	
	printf("\nEnter the value of the breath: ");
	scanf("%d", &b);
	A = area(l, b);
	printf("Area is: %d\n", A);
}
int area(int l, int b)
{
	return(l * b);/*area function*/
}
