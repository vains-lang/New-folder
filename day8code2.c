//q to check the wheather th ch is in up , lc , digit or a special character?
#include <stdio.h>
int main(){
    char val;
    printf("enter the value of val:\n");
    scanf("%c",&val);
    if(val>='a' && val<='z'){
        printf("the character is in lowercase...");
    }
    else if(val>='A' && val<='Z'){
        printf("the character is of upper case...");
    }
    
    else if(val>='0' && val<='9'){
        printf("the enter val is the digit...");
    }
    else{
        printf("the enter val is a special character...");
    }
    return 0;
}

