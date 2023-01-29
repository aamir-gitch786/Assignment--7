/******************************************************************************
5. Write a program to check whether two given numbers are co-prime
numbers or not
*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,b,min,i;
   printf("Enter two number\n");
   scanf("%d%d",&a,&b);
   min=a<b?a:b;
   for(i=min;i>=1;i--)
   {
       if(a%i==0 && b%i==0)
       break;
   }
   if(i==1)//means HCF must be equal to one.
   printf("Co-prime");
   else
   printf("Not a co-prime number");
    
    return 0;
}
