//checking if the num is prime or not?
#include<stdio.h>
int main(){
    int num;
    int factors=0;
    printf("enter the num which u r checking for prime:\n");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        if(num%i==0)
            factors+=1;
            
        }
        if(factors==2){
                printf("the num is a prime num...\n");
                
                }
                else{
                    printf("the num is composite num");
            }
            return 0;


    }
     