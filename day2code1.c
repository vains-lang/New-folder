//q3 to calculate area and perimeter of rectangle ?
#include<stdio.h>
int main(){
    int l;
    int b;
    printf("enter the value of l and b :\n");
    scanf("%d",&l);
    scanf("%d",&b);
    int area=l*b;
    int perimeter =2*(l+b);
    printf("the area of rectangle=%d\n",area);
    printf("the perimeter of rectangle=%d\n",perimeter);
    return 0;
}