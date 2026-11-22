//q1.merging two array ?
#include <stdio.h>
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9};
    int len1=sizeof(arr1)/sizeof(arr1[0]);
    int len2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[len1+len2];
    int len3=len1+len2;
    for(int i=0; i<len3; i++){
        if(i<5){
        arr3[i]=arr1[i];
    }
    else{
        arr3[i]=arr2[i-5];
    }
    printf("%d",arr3[i]);
}
}