#include <stdio.h>
void main()
{
    int marks;
    printf("Enter the marks(1-100) ");
    scanf("%d",&marks);

    if(marks >= 0 && marks <= 30)
    printf("FAIL \n");
    else if(marks > 30 && marks <= 100)
    printf("PASS \n");
    else {
    printf("wrong marks \n"); }
}
/*Display pass or fail through the marks*/