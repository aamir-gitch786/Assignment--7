/******************************************************************************
5. Write a program to check whether two given numbers are co-prime
numbers or not
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,ans,minimum,count=0;
    printf("Enter the value of two numbers\n");
    scanf("%d%d",&a,&b);
   
    minimum=a>b?b:a;
    for(int i=1;i<=minimum;i++)
    {
        if(a%i==0 && b%i==0)
        {
            count++;
        }
    }
    (count==1)?printf("%d and %d is co-prime numbers",a,b):printf("%d and %d is not co-prime numbers",a,b);
    
    
    return 0;
}


