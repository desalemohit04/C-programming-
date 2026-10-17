#include <stdio.h>
void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if(age > 18){
        printf("adult \n");
        printf("They can vote \n");
        printf("They can drive \n");
    }
    else{
        printf("not adult \n");
        printf("They can not vote \n");
        printf("They can not drive \n");
    }
}
/*to check the person is adult or not through the age*/