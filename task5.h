#include<stdio.h>
int CalculateResistance(char *,int[]);
int inputHandler5(char *, int index);
void task5(){
    int R[3];
    int a = CalculateResistance("Enter values \n",R);
    printf("The total resistance is : %d",a);
}

int CalculateResistance(char *str, int resistors[] ){
    int Rt = 0;
    for(int i = 0; i <= 2;i++){
        resistors[i] = inputHandler5("enter the value of R",i+1);
        Rt += resistors[i];
    }
    return Rt;
} 
int inputHandler5(char *str,int index){
    int r;
    printf("%s%d : ",str,index);
    scanf("%d",&r);
    return r;
}