#include <stdio.h>
#include <stdlib.h>

long int product(int m);

void main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The factorial of the number is: %d", product(n));
}

long int product(int m){

int c;

long int fact = 1;
if(m > 1)
    for(c = 2; c<=m; c++)
    fact *= c;
    return(fact);

}
