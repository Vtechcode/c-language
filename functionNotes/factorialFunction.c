#include <stdio.h>
#include <stdlib.h>


long int factorial(int n);

void main(){

int num;
printf("Enter an integer: ");
scanf("%d", &num);
printf("The factorial is: %d", factorial(num));
}

long int factorial(int n)
{

    int i;
    long int prod = 1;
    if(n>1)
        for(i = 2; i <= n; i++)
        prod *= i;
        return (prod);
}
