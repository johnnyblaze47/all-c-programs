#include<stdio.h>//multidimensional arrays: program to accept numbers in a two dimensional array//
void main()
{
	int arr[3] [3];
	int row, col;
	for (row=0; row<3; row++)
	{
		for(col=0; col<3; col++)
		{
			printf("\nEnter the number at [%d] [%d] :", row, col);
			scanf("%d", &arr[row] [col]);
		}
	}
	for(row=0; row<3; row++)
	{
		for(col=0; col<3; col++)
		{
			printf("\nThe number at [%d] [%d] is %d ", row, col, arr[row] [col]);
		}
	}
}
//the number of elemnets each array contains van be modified//
