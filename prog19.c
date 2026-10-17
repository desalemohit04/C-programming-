#include <stdio.h>
void main()
{
    int n;
    do {
        printf("enter number ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 2 != 0){
            break;
        }
    } while(1);
    printf("thank you");
}
/*take a number from the user and
print until it will odd*/