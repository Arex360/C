#include<stdio.h>
float inputHandler2(char *);
void task2(){
    float vf, vi, a, t;
    // vf = vi + at
    // vi = at - vf
    vf = inputHandler2("Enter the value of vf: ");
    a = inputHandler2("Enter the value of a: ");
    t = inputHandler2("Enter the value of t");
    vi = (a * t) - vi;
    printf("The value of vi = %f ",vi); 
}
float inputHandler2(char *str){
    printf(str);
    float temp;
    scanf("%f",&temp);
    return temp;
}