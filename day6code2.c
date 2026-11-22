//q2.to check weather the num is +,-,or 0?
#include<stdio.h>
int main(){
    int num;
    printf("enter the value of ur num:\n");
    scanf("%d",&num);
    if(num>0){
        printf("entered num is positive");

    }
    else if(num<0){
        printf("entered num is negative");
    
    }
    else{
        printf("entered number is zero");
    }

    return 0;
}   
