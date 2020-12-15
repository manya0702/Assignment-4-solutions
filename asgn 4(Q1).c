/* printing all the natural numbers between 1 to n using func */

#include<stdio.h>
int number(int n)
{
int i;
for(i=1;i<=n;i++)
    {
        printf("%d \n",i);
    }

return number;
}
int main()
{
int n;
printf("Enter the last natural number required:");
scanf("%d",&n);
number(n);

return 0;
}
