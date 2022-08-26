/******************************************************************************
7. Write a program to print all Prime numbers between two given numbers
*******************************************************************************/

#include <stdio.h>

int main()
{   int a,b,i,j,count;
    printf("Enter two numbers in between you want to print all prime numbers : ");
    scanf("%d%d",&a,&b);
    printf("All prime numbers between %d and %d is :",a,b);
    for(i=a+1;i<b;i++)
    { count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        printf("%d ",i);
        
    }
    return 0;
}

