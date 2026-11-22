//119 find the repeating number in an array in single iteration?
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of ur array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of ur array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int freq[1000]={0};
    for(int i=0; i<n; i++){      //arr=2 2 3 4 5
        if(freq[arr[i]]==1){        //frey[2]==1 no  its 0  // 1   ,   //frey[2]==1 yes print that number..
            printf("%d",arr[i]);
            break;
        }
        freq[arr[i]]=1;
    }
    return 0;
}  

