//wap to calculate the factorial of a num?
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int i=1;
    int fact=1;
    while(i<=n){
        fact*=i;
        i++;

    }
    printf("%d",fact);

    return 0;
}