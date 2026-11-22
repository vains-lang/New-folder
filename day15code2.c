//wap to reverse a given num?
#include<stdio.h>
int main(){
    int num;
    int rem;
    int rev=0;
    printf("enter the value of num:\n");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d",rev);
    return 0;
}