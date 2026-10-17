#include <stdio.h>
void main()
{
    char ch;
    printf("enter character ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("upper case character \n");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("lower case character \n");
    }
    else {
        printf("not an english character \n");
    }
}
/*Identify the lower and upper case characters*/