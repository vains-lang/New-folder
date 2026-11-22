//wap to classify a triangle as epui , isos ,salane based on it side length?
#include <stdio.h>
int main(){
    int ab;
    int bc;
    int ac;
    printf("enter the value of ab , bc , ac :");
    scanf("%d",&ab);
    scanf("%d",&bc);
    scanf("%d",&ac);
    if(ab==bc && ab==ac ){
        printf("the traingle is equilateral triangle...");
    }
    else if(ab!=bc && ab!=ac && bc!=ac){
        printf("the triangle is scalane traingle...");

    }
    else{
        printf("the triangle is isoceles...");
    }

   return 0;
}