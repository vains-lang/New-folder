//wap to input a year and chec wheather the year is leap or not without using conditional statements ?
#include <stdio.h>
int main(){
    unsigned int year;
    printf("enter the year:");
    scanf("%d",&year);
    switch(year%4){
        case 0:
        printf("entered year is leap year...");
        break;

        default:
        printf("entered year is not leap year...");

    }
    return 0;
}