#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); 

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); 
int j,temp;  
for (i = 0,j=n-1; i < n/2 && j>0 ; i++,j--) 
  {
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  }
     
    
    

for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]);  
   }
 
   return (0);
}