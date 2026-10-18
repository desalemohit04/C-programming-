//GCD using function(Greatest common divisor)
#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
void main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);

    printf("The GCD of the given numbers is %d",gcd(a,b));
}