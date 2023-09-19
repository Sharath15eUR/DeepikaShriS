#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); 
if((c<a+b)&&(a<b+c)&&(b<a+c))
  if((c*c==a*a+b*b)||(a*a==b*b+c*c)||(b*b==a*a+c*c))
  printf("Right-angle Triangle");
  else if (a== b && b==c && a==c)
  printf("Equilateral Triangle");
  else if(a==b || b==c ||a== c)
  printf("Isosceles Triangle");
  else
  printf("Scalene Triangle");
  
else
  printf("Triangle is not possible");
  
return 0;
}
