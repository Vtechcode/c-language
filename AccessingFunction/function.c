#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y){

int z;
z = (x >= y)? x : y;
return (z);

}


main()
{
    int a, b, c, d;
    printf("\n a= ");
    scanf("%d", &a);
    printf("\n b= ");
    scanf("%d", &b);
    printf("\n c= ");
    scanf("%d", &c);
    d = maximum(a, b);   /* Calculate and display the maximum value */
    printf("\n\n maximum = %d", maximum(c, d));
    return 0;

}
