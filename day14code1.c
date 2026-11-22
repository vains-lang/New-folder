//wap to print the sum of first n odd numbers?
#include <stdio.h>
int main(){
    int sum=0;
    int n;
    printf("enter the value of n:"); //kitne number tak odd number ka sum chaiye?
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
    
        sum=sum+(2*i-1);
    }
    printf("%d",sum);
    
    return 0;
}