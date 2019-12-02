#include<stdio.h>
#include<stdio.h>
#include<math.h>//quadratic equation: switch statement//

int main()
{
    float a,b,c,x,d,r1,r2;
    int y;
    printf ("Enter the value of a: \n");
    scanf ("%f", &a);
	printf("Enter the value of b: \n");
	scanf ("%f", &b);
	printf("Enter the value of c: \n");
	scanf ("%f", &c);
    x = (b*b) - 4 * a * c;
    d = sqrt (fabs(x));

    if (d==0)
      y = 1;
    else if (d>0)
       y = 2;
    else
       y = 3;

    switch (y)
    {
         case 1 : r1 = - b / 2 * a;
                  r2 = - b / 2 * a;

                  printf ("\n The roots are real and equal and the roots are %f  %f",r1,r2);
                  break;

        case 2 : r1 = (-b + d) / 2 * a;
                 r2= (-b - d) / 2 * a;

                 printf ("The roots are real and unequal and the roots are %f %f ", r1, r2);

                 break;

        case 3 : r1 = (-b + d) / 2 * a;
                 r2= (-b - d) / 2 * a;

                 printf ("The roots are imaginary and unequal and the roots are %f %fi ", r1, r2);

                 break;  
    }

    return 0;

}
