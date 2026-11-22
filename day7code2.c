//wap to input ch from user and check whether it is vowel or consonant?
#include <stdio.h>
#include <string.h>
int main(){
    char ch;
    printf("enter the ch as per ur choice:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("the character is vowel...");

    }
    else {
        printf("the character is consonant...");
    }
    return 0;
}