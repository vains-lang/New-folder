//read and print element from an 2d array ?
#include<stdio.h>
int main(){
    int rows=4;
    int cols=3;
    int matrix[4][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}