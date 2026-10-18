//Find the max of two numbers using functions
#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
void main()
{
    int a,b;
    printf("Enter the value od a and b");
    scanf("%d%d",&a,&b);

    printf("The maximum number is %d",max(a,b));
}