#include <stdio.h>

void turn(int num){
printf("Before adding value inside function num = %d \n", num);
num = num + 100;
printf("After adding value inside function num = %d \n", num);
}

int two(){
int x = 100;
printf("Before function call x = %d \n", x);
turn(x); //passing value in function
printf("After function call x = %d \n", x);
printf("x is %d", x);
return 0;

}
