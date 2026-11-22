

//q.1  to determine the largest numbers among 3 numbers
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter the value of a , b , c :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=b && a>=c){
        printf("a is the largest num");
    }
    else if(b>=a && b>=c){
        printf("b is the largest number");
    }
    else{
        printf("c is the largest number");
    }
    
    return 0;
}
