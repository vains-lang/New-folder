//convert a lowercase string to uppercase without using built in function?
#include<stdio.h>
int main(){
    char str[100];
    printf("enter the value of ur string :\n");
    scanf("%s",str);
    for(int i=0; str[i]!=0; i++){
        char ch=str[i];
        if(ch>='a'&& ch<='z'){
             str[i]=str[i]-32;
        }
    }
    printf("%s ",str);
    return 0;
}