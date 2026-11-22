//search in sorted array using binary search?
#include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int target;
    printf("enter the value u want to search in an array:\n");
    scanf("%d",&target);
    int st=0;
    int end=6;
    
    while(st<=end){
        int mid=(st+end)/2;
        if(target>arr[mid]){
        st=mid+1;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    else {
        printf("the index of ur target is %d\n",mid);
        return 0;
        
    
    }


    }
    printf("...not found...");

}



