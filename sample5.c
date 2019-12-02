#include<stdio.h>//write a program to solve an equation2//
void main()
{
	float P, K, Q1, Q2, Q3;
	int r, h, T, R;
	printf("\nEnter value for T");
	scanf("%d", T);
	printf("\nEnter value for P");
	scanf("%f", P);
	printf("\nEnter value for r");
	scanf("%d", r);
	printf("\nEnter value for h");
	scanf("%d", h);
	R = r*r;
	Q1 = T/360;
	Q2 = 3*P*R*h/2;
	Q3 = 1/4*h;
	K = Q1*Q2/Q3;
	printf("K = %f", K);
}
