//wap to take time in sec and covert it in hour::min::seconds format?
#include<stdio.h>
int main(){
    int hour=0;
    int min=0;
    int sec=0;
    printf("enter the number of seconds:\n");
    scanf("%d",&sec);
    hour=sec/3600;  // eg. 3663/3600=1hour
    sec=sec%3600;   // 3663%3600=63sec
    min=sec/60;
    sec=sec%60;
    printf("hour:%d\n",hour);
    printf("min:%d\n",min);
    printf("sec:%d\n",sec);
    return 0;

    
}