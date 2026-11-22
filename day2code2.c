//q4 to calculuate circumference and area of the circle given its radii?
#include <stdio.h>
int main(){
    int r;
    printf("enter the value of r:\n");
    scanf("%d",&r);
    int cir=2*3.14*r;
    int area=3.14*r*r;
    printf("the cir of circle :","%d\n",cir);
    printf("the area of circle:","%d\n",area);
    return 0;
}