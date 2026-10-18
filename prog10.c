//Swap two numbers using functions
#include <stdio.h>
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("The value of a after swapping is %d\n",a);
    printf("The value of b after swapping is %d",b);
}
void main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);

    swap(a,b);
}