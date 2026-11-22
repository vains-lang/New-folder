//program to swap two number by using third variable?
#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter the value of a , b  :");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the value of a is :%d\n",a);
    printf("the value of b is :%d\n",b);
    return 0;


}