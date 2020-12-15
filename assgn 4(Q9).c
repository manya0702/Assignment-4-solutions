/* printing the HCF of a number using recursion */

#include <stdio.h>
int hcf(int n1, int n2)
{
    if(n2 == 0)
        return n1;
    else
        return hcf(n2, n1%n2);
}

int main()
{
    int a, b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("HCF of %d and %d = %d", a,b,hcf(a,b));
    return 0;
}
