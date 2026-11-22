//remove all vowel from the string?
#include<stdio.h>
int main(){
    int len;
    printf("enter the len of ur string:\n");
    scanf("%d",&len);
    char str[len];
    printf("enter the value of ur str:\n");
    scanf("%s",str);
    int j=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("%s",str);
    return 0;
}