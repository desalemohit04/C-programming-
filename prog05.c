//find square using function
#include <stdio.h>
int square(int n)
{
    return n*n;
}
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);

    printf("The square od the given number is %d",square(n));
}