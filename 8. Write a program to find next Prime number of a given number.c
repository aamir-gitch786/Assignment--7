/******************************************************************************
8. Write a program to find next Prime number of a given number
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,count;
    printf("Enter the value of number\n");
    scanf("%d",&n);
    for(i=n+1; ;i++)
    { count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {printf("The next prime number is %d",i);
        return 0;}
    }


    return 0;
}

