#include <stdio.h>
int fact(int n)
{
    if (n==0)
    return 1;
    else
    return n*fact(n-1);
}
void main()
{
    int n,result;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=fact(n);
    printf("Factorial of the number is %d",result);
}
/* Display the factorial of a number using recursion */