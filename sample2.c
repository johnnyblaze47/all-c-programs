#include<stdio.h>//simple interest//
void main()
{
	int P, T;
	float R, SI;
	printf("\nEnter value for P");
	scanf("%d", &P);
	printf("\nEnter value for R");
	scanf("%f", &R);
	printf("\nEnter value for T");
	scanf("%d", &T);
	
	SI = P*R*T/100;
	printf("SI = %f", SI);
}
