//replace space with hypen in string ?
#include <stdio.h>
int main(){
    int len;
    printf("enter the len of ur string:\n");
    scanf("%d",&len);
    char str[len];
    printf("enter the value of ur string:\n");
    scanf(" %[^\n]",str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            str[i]='-';
        }
    }
    printf("%s",str);
    return 0;
}