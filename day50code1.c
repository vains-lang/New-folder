//change the date format ?
#include <stdio.h>
int main(){
    int date;
    int month;
    int year;
    printf("enter the date , month and year:\n");
    scanf("%d%d%d",&date,&month,&year);
    int dmonth[]={1,2,3,4,5,6,7,8,9,10,11,12};
    char * months[]={"january","feburary","march","april","may","june","july","august","september","october","november","december"};
    for(int i=0; i<12; i++){
        if(month==dmonth[i]){
            printf("%d %s %d",date , months[i] , year);
        }
        
        
    }
    return 0;
}
