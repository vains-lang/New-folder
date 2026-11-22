//pallindromi string?
#include <stdio.h>
int main(){
    int len;  //6
    printf("enter the len of ur string:\n");
    scanf("%d",&len);
    char str[len];
    char duplicate[len];
    printf("enter the value of ur string:\n");
    scanf("%s",str);
    int j=0;
    for(int i=len-1; i>=0; i--){
        duplicate[j]=str[i];
        j++;
    }
    duplicate[j]='\0';
    
    int flag=1;
    for(int i=0; i<len; i++){
        if(str[i]!=duplicate[i]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("pallindrome...");
    }
    else{
        printf("not a pallindrome...");
    }
    return 0;
}

