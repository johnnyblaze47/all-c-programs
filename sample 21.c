#include<stdio.h>//jump statement: Break//
int main()
{
	int cnt;
	for (cnt = 1; cnt <= 50; cnt ++)
	{
		if (cnt == 45)
		break;
		printf("%d\n", cnt);
	}
}
