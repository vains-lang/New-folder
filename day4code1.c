//q7 to wap two num without using third variable ?
#include <stdio.h>
int main(){
    int a;
    int b;
    printf("enter the value of a and b:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}