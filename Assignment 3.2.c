#include <stdio.h>//ATM password check: infinite chances until input correct pin//
int main() 
{
	int pin, x = 5;	
	
	while (x!=0)
	{
	printf("\nENTER PIN: ");
	scanf("%d",&pin);	
	
	if (pin == 3344)
	{ 
		printf("CORRECT PIN, WELCOME!");
		x=0;
    }
    else
    {
       printf("WRONG PIN, TRY AGAIN!\n", x);   
	      x --;
	}
	printf("\n");
   }
   printf("YOU HAVE EXCEEDED THE NUMBER OF TRIES FOR TODAY");
	return 0;
} 

