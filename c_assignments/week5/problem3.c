#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); 
int t;
t=N;
while(t>1 && t%2==0) 
{
  t/=2;
}
if(t==1)
  printf("%d is a number that can be expressed as power of 2.",N);
else
  printf("%d cannot be expressed as power of 2.",N);
return 0;
}