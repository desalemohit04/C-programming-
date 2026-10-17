#include <stdio.h>
void main()
{
    int n,fact=1;
    printf("enter number ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        fact = fact * i; 
    }
    printf("final factorial is %d",fact);
}
/*Print the factorial of the any number6*/