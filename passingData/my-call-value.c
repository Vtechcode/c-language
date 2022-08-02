#include <stdio.h>
#include <stdlib.h>

void passing(int one)
{

    int num;
    num = one + 300;
    printf("\n The number after changing value = %d", num);

}

int man()
{

    int x = 100;
    printf("\n The value of x after passing it into the function is:");
     passing(x);
    printf("\n But the value of x still remains as: %d", x);

}
