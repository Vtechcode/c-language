#include <stdio.h>
#include <stdlib.h>

void other(int *nm)
{

    printf("The value of nm before adding a value in it is: %d \n", *nm);
    (*nm) += 12;
    printf("The value of nm after adding a value in it is: %d \n", *nm);

}

int main()
{

    int z;
    z = 20;
    printf("The value of z before function call is: %d \n", z);
    other(&z);
    printf("The value of z after function call is: %d \n", z);

}


