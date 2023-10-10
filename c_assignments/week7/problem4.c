Write a C program to print Largest and Smallest Word from a given sentence. If there are two or more words of same length, then the first one is considered. A single letter in the sentence is also consider as a word.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below
 
printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);

*/
    int i, j = 0, k = 0;

    char *largest = "";
    char *smallest = "";
    int len_largest = 0;
    int len_smallest = 0;



    char *word = strtok(str, " ");
    while (word != NULL) {
        int len = strlen(word);
        if (len > len_largest || len_largest == 0) {
            largest = word;
            len_largest = len;
        }
        if (len < len_smallest || len_smallest == 0) {
            smallest = word;
            len_smallest = len;
        }

        word = strtok(NULL, " ");
    }

    printf("Largest Word is: %s\nSmallest word is: %s\n", largest, smallest);

    return 0;
}

 
