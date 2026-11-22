//count frequency of a given ch in a string ?
#include <stdio.h>
int main(){
    char ch;
    printf("enter the ch:\n");
    scanf("%c",&ch);
    int freq=0;
    char str[]="hiimnshu";
    for(int i=0; str[i]!='\0'; i++){
        if(ch==str[i]){
            freq+=1;
        }

    }
    printf("%d",freq);
    return 0;
}