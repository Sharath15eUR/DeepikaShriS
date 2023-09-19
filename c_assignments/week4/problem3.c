#include<stdio.h>
void main()
{
    int n;
    long int fact;  
    scanf("%d",&n);  
int count=1;fact=1;
if(n==0)
  printf("The Factorial of %d is : %ld",n,fact);
else
{
  while(count<=n)
  {
    fact=fact*count;
    count++;
  }
printf("The Factorial of %d is : %ld",n,fact);
}

}
