#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); 
int count=0,t;
t=N;
while(t!=0)
{
  t/=10;
  count++;
}
printf("The number %d contains %d digits.",N,count);
return 0;
}