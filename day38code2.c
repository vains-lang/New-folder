//add 2 matirx?
#include <stdio.h>
int main(){
    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    int sum[3][3];
    int rows=3;
    int columns=3;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}