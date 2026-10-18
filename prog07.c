//Check prime number using function
#include <stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    return 0;

    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);

    if(prime(n))
    printf("Prime number");
    else
    printf("Not a prime number");
}