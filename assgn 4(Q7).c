/* calculating the sum of digits using recursion */

#include<stdio.h>
int sum=0,rem;
int dig_sum(int num)
{
 if(num)
 {
    rem=num%10;
    sum=sum+rem;
    dig_sum(num/10);
 }
 return sum;
}
int main()
{
int n;
printf("Enter any number:");
scanf("%d",&n);
printf("The sum of the digits of %d is: %d",n,dig_sum(n));
return 0;
}
