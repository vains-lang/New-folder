//print each element in newline in a string?
#include<stdio.h>
int main(){
    char str[100];
    printf("enter the value of ur string:\n");
    scanf("%s",&str) ;
    int i=0;
    while(str[i]!='\0'){
        printf("%c\n",str[i]);
        
    }
    i++;
  return 0;
 }