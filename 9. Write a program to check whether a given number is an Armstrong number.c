/******************************************************************************
9. Write a program to check whether a given number is an Armstrong number
or not
*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{  int n,count=0,tem,tem1,sum=0;
printf("Enter the number \n");
scanf("%d",&n);
tem=n;
tem1=n;
while(n!=0)
{
  n/=10;
  count++;
}
while(tem!=0)
{
    sum=sum+pow(tem%10,count);
    tem=tem/10;
}
if(sum==tem1)
printf("%d is a Armstrong number",tem1);
else
printf("%d is not a Armstrong number",tem1);


    return 0;
}
