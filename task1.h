#include<stdio.h>
float inputHandler(char *);

// find vf
void task1(){
    float vf, vi, a , t;
    vi = inputHandler("Enter the value of vi: ");
    a = inputHandler("Enter the value of a: ");
    t = inputHandler("Enter the value of t: ");
    vf = vi + a*t;
    printf("The value of vf = %f",vf);
}
float inputHandler(char *str){
    printf(str);
    float temp;
    scanf("%f",&temp);
    return temp;
}