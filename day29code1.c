//Q1: Find the sum of array elements.

#include<stdio.h>
    int main()
    {
        int i , sum=0 , a;

        printf("Enter the size of array :- ");
        scanf("%d",&a);//size

        int arr[a];
        printf("Enter the values of arrays :- ");

        for(i=0 ; i<a ; i++)
        {
            scanf("%d",&arr[i]);// elements

        }
        printf("These are the values of array elements :- ");

        for(i=0 ; i<a ; i++)
        {
        printf(" %d ",arr[i]);//print elements
        }
        printf("\nThis is the sum of array elements :- ");

        for(i=0 ; i<a ; i++)
        {
        sum = sum+arr[i];//sum of elements
        }
        printf("%d",sum);
    

    return 0;
    }