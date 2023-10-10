/* Write a C program to sort a 1D array using pointer by applying Bubble sort technique.*/

#include<stdio.h>
void sort(int *a, int n);
int main()
{
    int a[20];
    int n,i; 
    scanf("%d",&n); // Enter number of elements to sort is taken from test case data
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); // The elements of the array is taken from the test data
    }

sort(a, n); // Calling the sorting function

    //Printing the sorted array 
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
   return 0;
}
void sort(int *a,int n)
{
  int i1,temp,j2;
  for(i1=1;i1<n;i1++)
  {
    for(j2=0;j2<n-i1;j2++)
    {
      if(*(a+j2)>= *(a+j2+1))
    {
      temp=*(a+j2);
        *(a+j2)=*(a+j2+1);
        *(a+j2+1)=temp;
    }
    }
  }
}
