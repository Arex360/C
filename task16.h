#include<stdio.h>
#include<math.h>
#define pi 3.14
void task16(){
   double T, L, g;
   L = 1;
   g = 10;
   T = 2 * pi * sqrt((L/g));
   printf("%lf",T);
}