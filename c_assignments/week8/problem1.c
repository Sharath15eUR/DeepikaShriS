//Write a C Program to find HCF of 4 given numbers using recursive function
#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

//Complete the rest of the program to calculate HCF
int HCF(int num1, int num2) 
{
    if (num2 != 0) 
    {
        return HCF(num2, num1 % num2);
    } else 
    return num1;
}
