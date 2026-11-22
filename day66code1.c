//116.
#include<stdio.h>
int main(){
    int n;
    printf("enter the len of ur array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in your array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter your target sum:");
    scanf("%d",&target);
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i+1; j<n; j++){
            sum=arr[i]+arr[j];
            if(sum==target){
                printf("%d %d ",i , j );
                return 0;
            }

        }
    }
    printf("-1 -1");
    return 0;
}