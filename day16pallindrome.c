//pallindrome? 
#include <stdio.h>
int main(){
    int num;
    int rem;
    int rev=0;
    printf("enter the num:\n");
    scanf("%d",&num);
    int original=num;
    while(num!=0){  //for eg we take 123...
        rem=num%10;   //3 //2 //1
        rev=(rev*10)+rem;   //3 //32 //321
        num=num/10;  //12  //1 //0

    }
    
    printf("%d",rev);
    if(original==rev){
        printf("pallindrome..");
    }
    else{
        printf("not a pallindrome...");
    }

    return 0;
}
























