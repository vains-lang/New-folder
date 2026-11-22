//118 //missing number from 0 ot n?
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of ur array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in ur array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int newsum=0;
    for(int i=0; i<=n; i++){
        newsum+=i;
    }
    int missingsum=newsum-sum;
    printf("%d",missingsum);

    return 0;
}

