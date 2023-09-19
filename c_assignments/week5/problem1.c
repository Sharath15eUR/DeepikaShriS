#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); 
int t=1,sum=0;
while(t<N)
{
  if(N%t==0)
  {
    sum+=t;
  }
  t++;
}
if(sum==N)
  printf("%d is a perfect number.",N);
else
  printf("%d is not a perfect number.",N);
return 0;