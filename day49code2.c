//print the initial of your name but not your surname?
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    printf("enter your name:\n");
    fgets(str1, sizeof(str1),stdin);
    printf("%c ",str1[0]);
    for(int i=0; str1[i]!='\0'; i++){
        if(str1[i]==' '){
            printf("%c",str1[i+1]);


        }
    }
    return 0;
}


