/* printing even or odd numbers withing a range using recursion*/

#include <stdio.h>
void EvenOdd(int i,int limit)
{
    if(i > limit)
        return;
    printf("%d, ",i);
    EvenOdd(i + 2,limit);
}

int main()
{
    int n1,n2;
    printf("Enter the first number of the range: ");
    scanf("%d", &n1);
    printf("Enter the last number of the range: ");
    scanf("%d", &n2);
    printf("Even/odd Numbers from %d to %d are: ", n1,n2);
    EvenOdd(n1,n2);
    return 0;
}

