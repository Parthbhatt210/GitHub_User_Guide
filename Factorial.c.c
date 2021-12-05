#include<stdio.h>
double factorial(int a);
void main() 
{
	int num1;
	double fact;

	printf("\n Enter the number to find factorial: ");
	scanf("%d",&num1);

	fact = factorial(num1);
	printf("\n Factorial of %d is %lf \n", num1, fact);
}
double factorial(int a)
{
  if (a == 0)
    return 1;
  else
    return(a * factorial(a-1));
}
