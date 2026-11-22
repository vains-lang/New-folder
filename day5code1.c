//program to calculate simple , compound interst fo rthe given principal,rate,time ?
#include <stdio.h>
int main(){
    float p;
    float r;
    float t;
    float interest;
    float compound;
    printf("enter the value of a,b,c:");
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);

    interest=(p*r*t)/100;
    printf("the interest is:%f\n",interest);
    return 0;
} 