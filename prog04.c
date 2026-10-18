//Check even or odd using functions
#include <stdio.h>
void check(int n)
{
    if(n%2==0)
    printf("Even");
    else
    printf("odd");
}
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);

    check(n);
}