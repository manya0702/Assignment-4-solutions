/* printing the sum of even or odd numbers using recursion */

#include <stdio.h>
int sumOfEvenOdd(int n1,int n2)
{
    if(n1>n2)
        return 0;
    else
        return (n1+ sumOfEvenOdd(n1 + 2,n2));
}
int main()
{
    int n1,n2,sum;
    printf("Enter the first number of the range: ");
    scanf("%d", &n1);
    printf("Enter the last number of the range: ");
    scanf("%d", &n2);
    printf("Sum of even/odd numbers between %d to %d = %d\n",n1,n2, sumOfEvenOdd(n1,n2));
    return 0;
}
