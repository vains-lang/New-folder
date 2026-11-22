//wap ot display the day of week based on a numner 1,7 using switch case?
#include <stdio.h>
int main(){
    int num;
    printf("enter the number between 1-7:");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Please enter the valid number...");

    }
    return 0;
}