//to calculate the sum of diagnol element in a 2d matrix?
#include<stdio.h>
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int column=3;
    int sum=0;
    for(int i=0; i<rows; i++){
        sum+=matrix[i][i];
    }
    printf("%d",sum);
    return 0;

}