
//q1 to check wheather the num is even or odd?
#include <stdio.h>
int main(){
    int num;
    printf("enter the value of num:");
    scanf("%d",&num);
    if(num%2==0){
        printf("the number is even...%d",num);

    }
    else{
        printf("the number is odd...%d",num);
    }
    return 0;
}
