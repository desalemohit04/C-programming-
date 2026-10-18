//Addition of two numbers using functions
#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int a,b;
    printf("Enter the  value of a and b");
    scanf("%d%d",&a,&b);

    printf("The sum of the numbers is %d",sum(a,b));
}