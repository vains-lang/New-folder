
//calculator?
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter the value of a and b:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    char choice;
    printf("enter the operator as per ur choice:\n");
    scanf(" %c",&choice);
    switch(choice){
        case '+':
        printf("the sum of a and b:%d",a+b);
        break;
        case '-':
        printf("the subs of a and b:%d",a-b);
        break;
        case '*':
        printf("the multiplication of a and b:%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("...zero division error...");
        }
        else{
        printf("the divide of a and b:%d", a/b);}
        break;
        default:
        printf("invalid operator...please enter a valid operator");


    };
    return 0;
 }