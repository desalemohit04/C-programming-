#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);

    printf("Smallest number is=%d",
    (a<=b && a<=c) *a+
    (b<a && b<+c)*b+
    (c<a && c<b)*c);
}
/*Smallest of two numbers*/