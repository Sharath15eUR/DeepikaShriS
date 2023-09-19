#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N); 
float i,t=1;
for(i=1;i<=N;i++)
{
  sum=sum+(t/i);
}
printf("Sum of the series is: %.2f",sum);
return 0;
}
  