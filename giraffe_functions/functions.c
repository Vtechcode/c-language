#include <stdio.h>
#include <stdlib.h>

int one()
{
    printf("Top\n");
    sayHi("Vic", 12);
    sayHi("Mo", 16);
    sayHi("Tom", 17);
    printf("bottom");
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}
