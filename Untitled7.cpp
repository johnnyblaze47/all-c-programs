#include <stdio.h>
int main()
{
  void check (int, float, double);
  int firstnum;
  float secnum;
  double thirdnum;
   
  printf("Enter a number: ");
  scanf("%d", &firstnum);
  printf("Great! Please enter a second number: ");
  scanf("%f", &secnum);
  printf("You are almost done, now enter your last number: ");
  scanf("%d", &thirdnum);
 
  check (firstnum, secnum, thirdnum);
 
  return 0;
}
void check (int x, float y, double z)
 
{
  float maxnum;
 
  if (x >= 0)
    maxnum = x;
  else if (y >= 0)
    maxnum = y;
  else if (z >= 0)
    maxnum = z;
 
 printf("\nThe three numbers entered is %.2d %.2f and %.2d\n", maxnum);
}
