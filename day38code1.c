//to check wheather the matrix is symmertic or not ?
#include<stdio.h>
int main(){
    int matrix1[3][3]={{2,3,6},{3,4,5},{6,5,9}};
    int matrix2[3][3];
    int matrix3[3][3];
    int rows=3;
    int columns=3;
    int flag=1;

    printf("enter the value inside the matrix:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            matrix3[j][i]=matrix2[i][j];
            printf("%d ",matrix3[i][j]);
            
        }
        printf("\n");
    }
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            if(matrix1[i][j] != matrix3[i][j]){
              flag=0;
            }
        }
    }

    if(flag==1){
        printf("the matrix is symmmetric...\n");
    }
    else{
        printf("the matrix is not symmetric...\n");
    }
    return 0;
}