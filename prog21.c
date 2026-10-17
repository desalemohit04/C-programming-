#include <stdio.h>
void main()
{
    for(int i=1; i<=10; i++){
        if(i == 6){        // skip
            continue;
        }
        printf("%d\n", i);
    }

}
/*Print the value from 1 to 10 
exept 6*/