/******************************************************************************

3. Write a program to check whether a given number is there in the Fibonacci
series or not.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
    int n,sqrt_one,sqrt_two,r1=0,r2=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    sqrt_one=sqrt(5*n*n+4);
    if((5*n*n+4)==pow(sqrt_one,2))
    r1=1;
    
    sqrt_two=sqrt(5*n*n-4);
    if((5*n*n-4)==pow(sqrt_two,2))
    r2=1;
    
    if(r1|| r2)
    printf("Yes \n");
    else
    printf("No\n");
    
    return 0;
}
