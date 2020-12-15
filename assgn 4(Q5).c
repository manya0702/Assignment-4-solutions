/* reversing a number using recursion */

#include<stdio.h>
int sum=0,rem;
int reverse_function(int num)
{
   if(num)
   {
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
return sum;
}
int main()
{
   int x,reverse_number;
   printf("Enter a number:");
   scanf("%d",&x);
   printf("The reversed number is:%d",reverse_function(x));
   return 0;
}
