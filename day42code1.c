//count vowel and consoant in a string?
#include<stdio.h>
int main(){
    char str[100];
    int cv=0;
    int cc=0;
    printf("enter the value of ur string:");
    scanf("%s",&str);
    for(int i=0; str[i]!='\0'; i++){
        char ch=str[i];
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cv+=1;
        }
        else{
            cc+=1;
        }
        
    }
    printf("%d\n",cv);
    printf("%d",cc);

    return 0;
}