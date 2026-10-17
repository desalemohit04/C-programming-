#include <stdio.h>
void main()
{
    int i,n,a[10],s=0;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    printf("Enter the value into the array \n");

    for(i=1;i<=n;i++)
    {
        scanf("%d",a[i]);
    }
    
    for(i=1;i<=n;i++)
    {
        if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }
    printf("The sum of odd numbers is %d",s);
}
/*Display the sum of the odd numbers in an array*/