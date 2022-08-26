/******************************************************************************

2. Write a program to print first N terms of Fibonacci series

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=-1,b=1,c,n;
    printf("Enter the value of Nth term :\n");
    scanf("%d",&n);
    printf("First %d terms of Fibonacci series is : ",n);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    return 0;
}
