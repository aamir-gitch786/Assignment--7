/******************************************************************************
6. Write a program to print all Prime numbers under 100
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,count;
    printf("All prime numbers under 100 : ");
    for(i=1;i<100;i++)
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

