//wap that accept a percentage and assingn a grade based on the criteria?
#include <stdio.h>
int main(){
    int percent;
    printf("enter your percentage:");
    scanf("%d",&percent);
    if(percent>=90 && percent<=100){
        printf("Grade-A");
    }
    else if(percent>=89 && percent<=80){
        printf("Grade-B");
    }
    else if(percent>=70 && percent<=79){
        printf("Grade-C");
    }
    else if(percent>=60 && percent <=69){
        printf("Grade-D");
    }
    else{
        printf("Grade-F");
    }
    return 0;
}