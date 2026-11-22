//q2 to print the summ , sub , mul , quotient of number a and b?

#include <stdio.h>
int main(){
    int a;
    int b;
    printf("enter the value of a and b:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int sum=a+b;
    int mul=a*b;
    int sub=a-b;
    int quo=a/b;
    printf("the sum of a and b is :""%d\n",sum);
    printf("the multi of a and b is:""%d\n",mul);
    printf("the sub of a and b is:""%d\n",sub);
    printf("the quotient of a and b is:""%d\n",quo);

    return 0;
}
