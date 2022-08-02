#include <stdio.h>
#include <stdlib.h>


void main(){

    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    maximum(x, y);

}

void maximum(int x, int y){

int z;
z = (x >= y)? x: y;
printf("The largest of the two integers is: %d", z);

}
