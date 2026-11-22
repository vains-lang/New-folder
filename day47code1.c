//check wheater 2 string r anagram of each other?
#include <stdio.h>
#include<string.h>
int main(){
    int len1;
    int len2;
    printf("enter the len1 of ur string1:\n");
    scanf("%d",&len1);
    printf("enter the value of string2:\n");
    scanf("%d",&len2);
    char str1[len1];
    char str2[len2];
    
    printf("enter both the string to check for the anagram:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    for(int i=0; str1[i]!='\0'; i++){
        for(int j=i+1; str1[j]!='\0'; j++){
            if(str1[i]>str1[j]){
                char temp=str1[i];
                str1[i]=str1[j];
                str1[j]= temp;

            }
        }
    }

    for(int i=0; str2[i]!='\0'; i++){
        for(int j=i+1; str2[j]!='\0'; j++){
            if(str2[i]>str2[j]){
                char temp=str2[i];
                str2[i]=str2[j];
                str2[j]= temp;

            }
        }
    }
    printf("%s\n",str1);
    printf("%s\n",str2);

    if(strcmp(str1,str2)==0){
        printf("<<<anagram>>>");
    }
    else{
        printf("<<<not a anagram>>>");
    }

    return 0;

} 
