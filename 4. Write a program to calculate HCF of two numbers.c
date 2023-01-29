/******************************************************************************
4. Write a program to calculate HCF of two numbers.
*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
   int a,b,min;
   scanf("%d%d",&a,&b);
   min=a<b?a:b;
   for(int i=min;i>=1;i--)
   {
       if(a%i==0 && b%i==0)
       {printf("HCF of %d and %d is %d",a,b,i);
       break;
       }
   }
    
    return 0;
}

