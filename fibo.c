//fibonocci series...
#include<stdio.h>
int main(){
    int n;
    printf("enter the n terms:\n");
    scanf("%d",&n);
    int x=0;
    int y=1;
    int z=0;  //here z=sum...
    while(z<=n){
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;
        
        
    }
    return 0;
} 

