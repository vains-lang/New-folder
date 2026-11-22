//Q1: Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>

    int main()
    {
        int a , i , j;
        printf("Enter a number to check all the prime numbers between it and 0 :- ");
        scanf("%d",&a);

        for(i=2 ; i<=a ; i++)
        {
            int prime = 1;
            for(j=2 ; j<=i-1 ; j++)
            {
                if (i % j == 0) 
                {
                prime = 0;  
                break;
                }
            }
            if (prime == 1) 
            {
            printf("%d ", i);  
            }
                
        }
        return 0;
    }