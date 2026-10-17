#include <stdio.h>

void main()
{
    int a[100], n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            sum = sum + a[i];
        }
    }

    printf("Sum of odd numbers = %d", sum);
}
/* Display the sum of odd numbers in an array */