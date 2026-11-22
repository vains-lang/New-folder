//115.anagram?
#include<stdio.h>
#include<string.h>
int main(){
    int n1;
    int n2;
    printf("enter the length of ur strings:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1!=n2){
        printf("plz enter the same length first...");
    return 0;}
    char str1[n1];
    char str2[n2];
    printf("enter the value of ur both the string u r checking for the anagram:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    for(int i=0; str1[i]!='\0'; i++){
        for(int j=i+1; str1[j]!='\0'; j++){
            if(str1[i]>str1[j]){
                char temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    for(int i=0; str2[i]!='\0'; i++){
        for(int j=i+1; str2[j]!='\0'; j++){
            if(str2[i]>str2[j]){
                char temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
   if(strcmp(str2,str1)==0){
    printf("anagram");
   }
   else{
    printf("not an anagram");
   }
    return 0;
}