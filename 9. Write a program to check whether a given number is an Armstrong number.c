/******************************************************************************
9. Write a program to check whether a given number is an Armstrong number
or not
*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
  int n,digit=0,tem,sum=0,result_matching;
  printf("Enter the number\n");
  scanf("%d",&n);
  tem=n;
  result_matching=n;
  while(n)//for finding the number of digits in given number.
  {
    n/=10;
    digit++;
  }
  while(tem)//for suming the values.
  {
      sum=sum+pow(tem%10,digit);
      tem/=10;
  }
  if(sum==result_matching)//for checking the conditions
  printf("Yes %d is a Armstrong number\n",result_matching);
  else
  printf("No %d is not a Armstrong number\n",result_matching);
  
    
    return 0;
}


