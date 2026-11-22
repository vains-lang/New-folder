#include<stdio.h>
#include<math.h>
int main(){
    int num;
    int count=0;
    int sum=0;
    printf("enter the num:\n");
    scanf("%d",&num);
   
    while(num!=0){
        count++;
        num=num/10;
        
    }
    while(num!=0){
        int rem=num%10;
        int power=pow(rem,count);
        sum+=power;
        num=num/10;
    }
    if(sum==num){
        printf("armstrong num hai\n");

    }
    else{
        printf("not a armstrong num\n");
    }
    return 0;
}



