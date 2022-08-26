/******************************************************************************
4. Write a program to calculate HCF of two numbers.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,ans,minimum;
    printf("Enter the value of two numbers\n");
    scanf("%d%d",&a,&b);
   
    minimum=a>b?b:a;
    for(int i=1;i<=minimum;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    printf("HCF of %d and %d is : %d",a,b,ans);
    
    
    return 0;
}
