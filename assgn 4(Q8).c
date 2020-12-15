/* printing the fibonacci sequence using recursion */

#include<stdio.h>
int fibo(int num)
{
if(num==0 || num==1)
    return num;

return fibo(num-1)+fibo(num-2);
}
int  main()
{
int n;
printf("Enter the number of terms of the series:");
scanf("%d",&n);
printf("The %d of the fibonacci sequence is: %d",n,fibo(n));
return 0;
}
