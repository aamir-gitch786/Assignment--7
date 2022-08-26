/******************************************************************************

3. Write a program to check whether a given number is there in the Fibonacci
series or not.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=-1,b=1,c,n,i;
    printf("Enter the number that you want to check in the Fibonacci seires :\n");
    scanf("%d",&n);
   
    for( i=1;i<=2*n+1;i++)
    {
        c=a+b;
        if(c==n)
        {printf("Yes it is present in the Fibonacci seires ");
        return 0;}
        a=b;
        b=c;
    }
    if(c!=n)
    printf("No it is not present in the Fibonacci seires");
    return 0;
}
