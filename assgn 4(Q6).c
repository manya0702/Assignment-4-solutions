/* to check if a given number is a palindrone using recursion */

#include<stdio.h>
int sum=0,rem=0;
int palindrone(int num)
{
if(num)
{   rem=num%10;
    sum=sum*10+rem;
    palindrone(num/10);
}
return sum;
}
int main()
{ int n;
printf("Enter a number:");
scanf("%d",&n);
palindrone(n);
{if(sum==n)
    printf("The number is a palindrone");
else
    printf("The number is not a palindrone");
}
return 0;
}


