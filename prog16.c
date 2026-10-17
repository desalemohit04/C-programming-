#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);

    int i=0;
    while(i <= n){
        printf("%d\n",i);
        i++;
    }
}
/*Print n times anything using while loop*/