#include<stdio.h>//check grade of a student//

void main()
{
	float score;
	score = 0;
	printf("\nEnter score:");
	scanf("%f", &score);
	if (score >= 70)
	printf("A");
	else if (score >= 60)
	printf("\nB");
	else if (score >= 50)
	printf("\nC");
	else if (score >= 40)
	printf("\nD");
	else 
	printf("FAIL");
	}
