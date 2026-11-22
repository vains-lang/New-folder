//pallindrome
#include<stdio.h>
int main(){
    int num;
    int rem;
    int rev=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    int duplicate=num;
    while(num!=0){
        rem=num%10; //123%10=3,2,1
        rev=(rev*10)+rem; //3 ,32,321
        num=num/10;//123/10=12,1
        
    }
    if(rev==duplicate){
        printf("pallindrome...");

    }
    else{
        printf("not a pallindrome...");
    }

    return 0;
}
