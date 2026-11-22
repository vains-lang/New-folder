//117 merge two sorted array?
#include<stdio.h>
int main(){
    int m;
    int n;
    
    printf("enter the size of ur array 1 and array 2:");
    scanf("%d",&m);
    scanf("%d",&n);
    int o=m+n;
    int arr1[m];  //5
    int arr2[n];
    int arr3[o];
    printf("enter the element of ur array 1 in a sorted manner:");
    for(int i=0; i<m; i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the element of ur array 2 in a sorted manner");
    for(int i=0; i<n; i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0; i<m; i++){
        arr3[i]=arr1[i];
    }
    for(int i=0; i<n; i++){
        arr3[i+m]=arr2[i];
    }
    for(int i=0; i<o; i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}

