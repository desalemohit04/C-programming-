/*Coversion of C into F*/
#include <stdio.h>
void main()
{
    float farheneit,celcius;
    printf("Enter the value in C");
    scanf("%f",&celcius);

    farheneit=(celcius*9.0/5.0)+32.0;
    printf("The value of celcius in farheneit is %f",farheneit);
}
/*To covert celcius in the Ferheniet*/