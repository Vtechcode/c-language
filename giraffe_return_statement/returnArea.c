#include <stdio.h>
#include <stdlib.h>

double area(double num1, double num2);

int main(){

double num1, num2;
printf("Enter num1 and num2: ");
scanf("%lf %lf", &num1, &num2);
printf("The area is %f", area(num1, num2));

}

double area(double num1, double num2){
double sa;
sa = num1 * num2;
return sa;

}
