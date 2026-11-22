//wap to print the product of even num from 1 to n?
#include <stdio.h>
int main(){
    int n;
    int product=1;
    printf("enter the value of n :\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            product*=i;
        }
    }
    printf("%d",product);
    return 0;
}