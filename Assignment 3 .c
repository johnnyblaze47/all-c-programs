#include<stdio.h>//ATM password check 2: 3 CHANCES//
int main()
{
	int pin, count = 3;
	do 
	{
		printf("ENTER PIN:");
		scanf("%d", &pin);
		switch(pin)
		{
			case 3344:
				printf("CORRECT PIN, WELCOME!\n");
				return 0;
				break;
				default:
					printf("INCORRECT PIN!\n TRY AGAIN!\n", count);
					break;
					
					
		}
		count --;
	}
	while (count != 0);
	printf("YOU HAVE EXCEEDED THE NUMBER OF TRIES FOR TODAY!");
}
