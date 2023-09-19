#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N); 
int count=2;
while(count<=N)
{
  sum=sum+count;
  count=count+2;
}
printf("Sum = %d",sum);

}