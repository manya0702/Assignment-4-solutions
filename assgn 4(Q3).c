/*To print the sum of n natural numbers using recursion */

#include<stdio.h>
int sum(int x)
{
int add=0;
if (x==1)
   return (1);
else
   add=x+sum(x-1);

return (add);
}

int main()
{
int n=0;
printf("Enter the last value of the range:");
scanf("%d",&n);
printf("The sum of %d natural numbers is : %d",n,sum(n));

return 0;
}
