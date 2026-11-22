//to count spaces , digits ,and special character it a string?
#include<stdio.h>
int main(){
    int len;
    printf("enter the len of ur string:\n");
    scanf("%d",&len);
    char str[len];
    printf("enter ur string:\n");
    scanf(" %[^\n]",str);
    int cs=0;
    int cd=0;
    int sp=0;
    for(int i=0; i<len; i++){
        char ch=str[i];
        if(ch=='0' || ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='5' || ch=='6' || ch=='7' || ch=='8' || ch=='9'){
            cd+=1;
        }
        else if(ch==' '){
            cs+=1;
        }
    }
    printf("%d\n",cs);
    printf("%d\n",cd);
    return 0;
}