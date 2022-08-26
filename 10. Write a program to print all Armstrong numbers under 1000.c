
/******************************************************************************
10. Write a program to print all Armstrong numbers under 1000
*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{  int n,count,tem,tem1,sum,r,tem3;
for(n=1;n<1000;n++)
{      
 sum=0;tem=n;tem1=n,count=0,tem3=n;
 //for finding the length of digits. 
  while(tem3!=0)
  {
    tem3/=10;
    count++;
  }
//computing power accoding to digits present in the numbers and store it into sum variable.  
  while(tem!=0)
  { r=tem%10;
    sum=sum+pow(r,count);
    tem=tem/10;
  }
//chekcing the condition of armstrong . 
  if(sum==tem1)
  printf("%d ",sum);
}
/*you spend 1 hours to solve this problem because you were doing a mistake and mistake was you were taking n value n/=10 
therefor n value become zero and program run in infinite loop.*/
   return 0;
}

