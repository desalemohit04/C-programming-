#include <stdio.h>

int power(int a,int b)
{
    if(b==0)
    return 1;
    else
    return a*power(a,b-1);
}
void main()
{
    int a,b,result ;
    printf("Enter the base and it's power: ");
    scanf("%d%d",&a,&b);

    result = power(a,b);
    printf("The answer is %d",result);
}
/* Display the power of a number using recursion */