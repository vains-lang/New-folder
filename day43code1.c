//reverse a string ?
#include<stdio.h>
int main(){
    char str[]="himanshu";
    int st=0;
    int end=7;
    int temp;
    while(st<=end){
        temp=str[st];
        str[st]=str[end];
        str[end]=temp;
        st++;
        end--;

    }
    printf("%s ",str);
    return 0;
}