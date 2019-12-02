#include<stdio.h>//nested if: qualification for Promo check//

void main()
{
	int Year;
	float Amount;
	printf("\nEnter number of years:");
	scanf("%d", &Year);
	printf("\nEnter amount invested:");
	scanf("%f", &Amount);
	if ( Year >= 10)
	{
		if (Amount >= 500000)
		printf("\nYOU ARE ENTITLED TO THIS OFFER");
		else 
		printf("\nYOU ARE NOT ENTITLED TO THIS OFFER");
	}
		else 
		{
		printf("\nYOU ARE NOT ENTITLED TO THIS OFFER");
	}
}
