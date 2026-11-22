//q1. to calculate prime number upto n numbers?
#include<stdio.h>
    int main()
    {
        int a , i , fact ;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        for(i=1 ; i<=a ; i++)
        {
            fact = a%i;
            if(fact == 0)
            {
                printf("%d ",i);
            }

        }
        
        return 0;
    }