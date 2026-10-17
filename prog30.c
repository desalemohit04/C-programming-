#include <stdio.h>
void main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {}
    printf("reversed string is: ");
    for(i = i - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}