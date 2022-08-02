#include <stdio.h>
#include <stdlib.h>

void sum();
void one()
{

    printf("\nGoing to calculate the sum of two numbers:");
    sum();
}

void sum()
{

    int a,b;
    printf("\nEnter two numbers");
    scanf("%d %d", &a, &b);
    printf("The sum is %d", a +  b);
}
