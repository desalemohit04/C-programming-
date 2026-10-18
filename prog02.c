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
    int a,b;
    printf("Enter the value of base and exponent");
    scanf("%d%d",&a,&b);

    printf("The power of  the given number is %d",power(a,b));
    
}
//calcaulate power of nay number using recersion function