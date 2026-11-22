//113.wap to take an integer array arr and an integer k as inputs. the task is to find the kth smallest element in the array.
//print the kth smallest element as output?
#include<stdio.h>
int main(){
    int n;
    printf("enter the len of ur array:");
    scanf("%d",&n);
    int k;
    printf("enter the position :");
    scanf("%d",&k);
    int arr[n];
    printf("enter the elements in ur array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];    //selection sort
                arr[j]=temp;
            }
        }
    }
    printf("%d",arr[k-1]);
}