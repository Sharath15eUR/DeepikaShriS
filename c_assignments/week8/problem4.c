//Write a C Program to reverse a given word using function. e.g. INDIA should be printed as AIDNI
#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
int length = strlen(str1);
    reverse(str1, 0, length - 1);

    printf("The string after reversing is: %s\n", str1);

    return 0;
}

void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        // Swap characters at the start and end positions
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

