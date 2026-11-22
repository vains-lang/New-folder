//q1.to find second largest number in an array
#include <stdio.h>
int main(){
    int arr[]={2,7,6,5,8};
    int n=5;
    int temp;
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;

            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;


    }
    
    
    int idx=sizeof(arr)/sizeof(int);
    printf("%d\n",arr[idx-2]);
    return 0;
}   
 