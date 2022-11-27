#include<stdio.h>
#include<math.h>
void task15(){
    double E , m , c;
    m = 20;
    c = 3 * pow(10,8);
    c = pow(c,2); // c ^ 2
    E = m * c; // c => c^2
    printf("%lf",E);
}