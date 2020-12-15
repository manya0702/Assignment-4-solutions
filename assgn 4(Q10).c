/* to print the LCM of two numbers using recursion */

#include<stdio.h>
int lcm(int n1, int n2)
{
    static int i = 0;
    i=i+1;
    if((i% n1 == 0) && (i% n2== 0))
    {return i;}
    else
    {return lcm(n1, n2);}
}
int main()
{
    int a, b, LCM;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if(a>b)
        LCM = lcm(b,a);
    else
        LCM = lcm(a,b);

    printf("LCM of %d and %d = %d",a,b,LCM);
    return 0;
}
