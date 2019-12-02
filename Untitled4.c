#include<stdio.h>//write a program to solve an equation1//
void main()
{
	float P, A;
	int r, h, R;
	printf("\nEnter value for P");
	scanf("%f", &P);
	printf("\nEnter value for r");
	scanf("%d", &r);
	printf("\nEnter value for h");
	scanf("%d", &h);
	R = r*r;
	A = P*R*h;
	printf("A = %f", A);
	
}
