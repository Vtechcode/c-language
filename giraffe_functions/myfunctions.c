#include <stdio.h>
#include <stdlib.h>

void main(){
char jina[100];
int num1, num2;
printf("Please enter your name: ");
scanf("%s", &jina);
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
greetings(jina);
operations(num1, num2);
}

void greetings(char name[]){
printf("Hey %s ", name);
}

void operations(int num1, int num2){
    printf("The sum is %d", num1 + num2);
}
