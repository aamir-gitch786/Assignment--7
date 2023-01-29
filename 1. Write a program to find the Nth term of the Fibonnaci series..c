/******************************************************************************

1. Write a program to find the Nth term of the Fibonnaci series.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=-1,b=1,c,n;
    printf("Enter the value of Nth term :\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%dth term of the fibonnaci series is %d",n,c);

    return 0;
}

