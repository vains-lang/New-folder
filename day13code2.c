//wap to print num from 1 to n?
#include <stdio.h>
int main(){
    int num;
    printf("enter the n num to want to reach:\n ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        printf("%d\n",i);
    }
    return 0;
}
