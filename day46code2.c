//find the first repeating lowercase character in a string ?
#include<stdio.h>
int main(){
    int len;
    printf("enter the len of ur string:\n");
    scanf("%d",&len);
    char str[len];
    printf("enter the string:\n");
    scanf("%s",str);
    for(int i=0; str[i]!=0; i++){
        if(str[i]>='a' && str[i]<='z'){
            for(int j=i+1; str[j]!='\0'; j++){
                if(str[i]==str[j]){
                    printf("%c",str[i]);
                }
            }

        }
        else{
            printf("<<<no repeating ch found>>>");
        }

    }
    return 0;
}