#include<stdio.h>
float inputHandler13(char *);
void task13(){
    float F , m , a;
    m = inputHandler13("Enter the value of m : ");
    a = inputHandler13("enter the value of a: ");
    F = m * a;
    printf("%f",F);
}
float inputHandler13(char *str){
    printf("%s",str);
    float temp;
    scanf("%f",&temp);
    return temp;
}