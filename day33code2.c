//q2.inserting an element in an array ?
#include <stdio.h>
int main(){
    int arr[100]={7,8,12,27,88};
    int element;
    int index;
    printf("enter the element and index where u want to insert it:\n");
    scanf("%d",&element);
    scanf("%d",&index);
    int size=5;
    int capacity=100;
    if(size>=capacity){
        return -1;
    }
    for (int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size=6;
    for(int j=0; j<=size-1; j++){
        printf("%d\n",arr[j]);
    }

    return 0;
}
